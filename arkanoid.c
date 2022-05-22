#include <atari.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <peekpoke.h>
#include "atari_defs.h"

#define SCREEN_WIDTH 40
#define SCREEN_HEIGHT 24

#define TEXT_COLOR 0x2C5
#define BACK_COLOR 0x2C6

#define BRICK 29
#define PADDLE 213
#define PADDLE_Y 23
#define PADDLE_SIZE 6

//#define pmg_memory 0x2000
//#define pmg_memory_ptr ((uint8_t *)0x2000)

uint8_t *video_ptr = NULL;
uint8_t total_tiles = 0;
uint8_t paddle_pos = 20;

//char paddle_gfx[] = { 0x3C, 0x7E, 0xFF, 0xFF };

void SetColors(void)
{
    POKE(TEXT_COLOR, 0xFF); /* white bricks */
    POKE(BACK_COLOR, 0x00); /* black background */
}

void ClearPaddle(void)
{
    uint8_t x;

    for(x=0; x<SCREEN_WIDTH; x++)
    {
        video_ptr[PADDLE_Y * SCREEN_WIDTH + x] = 0;
    }
}

// void init_pmg(void)
// {
//     POKE(SDMCTL, DMACTL_ENABLE_PLAYER_DMA |
//                 DMACTL_ENABLE_MISSLE_DMA |
//                 DMACTL_NORMAL_PLAYFIELD |
//                 DMACTL_SINGLE_LINE_RESOLUTION |
//                 DMACTL_DMA_FETCH_INSTRUCTION);

//     // PMBASE points to our PMG memory page (page has 256 bytes)
//     POKE(PMBASE, pmg_memory / 256);

//     // Zero PMG memory
//     memset(pmg_memory_ptr, 0, 2048);

//     // Turn on PMG for players and missiles
//     POKE(GRACTL, PMG_PLAYERS | PMG_MISSILES);

//     // Set PMG priority
//     POKE(GPRIOR, 1);

//     // Init paddle
//     POKE(PCOLR0, 0xFF);
//     POKE(SIZEP0, SIZEP_DOUBLE);
//     POKE(HPOSP0, paddle_pos);

//     // +0x400 for the player 0, +192 for vertical position on the screen
//     memcpy(pmg_memory_ptr+0x400+192, paddle_gfx, sizeof(paddle_gfx));
// }

void DrawBricks(void)
{
    uint8_t x, y;

    for(y=0; y<10; y+=2)
    {
        for(x=0; x<SCREEN_WIDTH; x+=2)
        {
            video_ptr[y * SCREEN_WIDTH + x] = BRICK;
        }
    }
}

void DrawPaddle(void)
{
    register uint8_t s;

    for(s=0; s<PADDLE_SIZE; ++s)
    {
        video_ptr[PADDLE_Y * SCREEN_WIDTH + paddle_pos + s] = PADDLE;
    }
}

void move_paddle_left(void)
{
    if(paddle_pos < 1)
        paddle_pos = 0;
    if(paddle_pos > 0)
        paddle_pos -= 1;

    //POKE(HPOSP0, paddle_pos);
}

void move_paddle_right(void)
{
    if(paddle_pos > (SCREEN_WIDTH - PADDLE_SIZE))
        paddle_pos = (SCREEN_WIDTH - PADDLE_SIZE);
    if(paddle_pos < (SCREEN_WIDTH - PADDLE_SIZE))
        paddle_pos += 1;

    //POKE(HPOSP0, paddle_pos);
}

int main(void)
{
    _graphics(0);
    SetColors();
    //init_pmg();

    // Get screen memory pointer
    video_ptr = (uint8_t*)(PEEKW(PEEKW(560)+4));

    DrawBricks();

    while(1)
    {
        /* wait a moment and read the joystick state after that */
        POKE(CDTMV3, 1);
        while(PEEK(CDTMV3));

        /* disable Attract mode */
        POKE(0x4D, 0);

        //joy = joy_read(JOY_1);

        // if(JOY_BTN_1(joy))
        //    move_paddle_left();
        // if(JOY_BTN_2(joy))
        //    move_paddle_right();

        switch(OS.ch)
        {
            case KEY_A: move_paddle_left(); break;
            case KEY_D: move_paddle_right(); break;
        }

        ClearPaddle();
        DrawPaddle();
    }

    //joy_uninstall();

    return EXIT_SUCCESS;
}

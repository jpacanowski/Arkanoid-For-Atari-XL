#include <atari.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <peekpoke.h>

#define SCREEN_SIZE 40
#define PADDLE_Y 20
#define PADDLE_SIZE 6

#define TEXT_COLOR 0x2C5
#define BACK_COLOR 0x2C6

#define BRICK 29
#define PADDLE 213

uint8_t *video_ptr = NULL;
uint8_t total_tiles = 0;
uint8_t paddle_pos = 0;

void SetColors(void)
{
    POKE(TEXT_COLOR, 0xFF); /* white bricks */
    POKE(BACK_COLOR, 0x00); /* black background */
}

void DrawBricks(void)
{
    for(total_tiles=0; total_tiles<4*SCREEN_SIZE; total_tiles++)
    {
        video_ptr[total_tiles] = BRICK;
    }
}

void DrawPaddle(void)
{
    register uint8_t s;
    for(s=0; s<PADDLE_SIZE; ++s)
    {
        video_ptr[PADDLE_Y*SCREEN_SIZE+paddle_pos+s] = PADDLE;
    }
}

int main(void)
{
    _graphics(0);
    SetColors();

    // Get screen memory pointer
    video_ptr = (uint8_t*)(PEEKW(PEEKW(560)+4));

    DrawBricks();

    while(1)
    {
        DrawPaddle();
    }

    return EXIT_SUCCESS;
}

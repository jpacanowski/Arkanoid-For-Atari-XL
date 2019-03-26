CC = cl65
AS = ca65
LD = cl65

TARGET = atari
CFLAGS = -O -t $(TARGET)
LDFLAGS = -t $(TARGET)
OBJS = arkanoid.o

PROGRAM = arkanoid.xex

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $(OBJS) $(TARGET).lib

%.o: %.s
	$(AS) $(CFLAGS) $< -o $@

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f *.o
	rm -f *.xex

run:
	atari800 $(PROGRAM)

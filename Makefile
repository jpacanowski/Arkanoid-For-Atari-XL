CC = cl65
AS = ca65
LD = cl65

TARGET = atari
CFLAGS = -Osir -t $(TARGET)
ASFLAGS = -t $(TARGET)
LDFLAGS = -t $(TARGET)
OBJS = arkanoid.o ataristd.o

PROGRAM = arkanoid.xex

all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $(OBJS) $(TARGET).lib

%.o: %.s
	$(AS) $(ASFLAGS) $< -o $@

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -f *.o
	rm -f *.xex

run:
	atari800 $(PROGRAM) -sound -mouse joy

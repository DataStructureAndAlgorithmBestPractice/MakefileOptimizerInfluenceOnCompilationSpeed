CC = gcc
CFLAGS = -Wall -Wextra -g
OPT = -O0
CFILES =  $(wildcard *.c)
OBJECTS = $(patsubst %.c, %.o, $(CFILES))
BINARY = Opt_lvl0

all : $(BINARY)

$(BINARY):$(OBJECTS)
	$(CC) -o $@ $^

%.o : %.c		
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJECTS) $(BINARY)

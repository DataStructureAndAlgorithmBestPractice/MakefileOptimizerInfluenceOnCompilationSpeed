CC = gcc
CFLAGS = -Wall -Wextra -g
OPT = -O3 -funroll-loops
CFILES =  $(wildcard *.c)
OBJECTS = $(patsubst %.c, %.o, $(CFILES))
BINARY = Opt_lvl3-funroll-loops

all : $(BINARY)

$(BINARY):$(OBJECTS)
	$(CC) -o $@ $^

%.o : %.c		
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJECTS) $(BINARY)

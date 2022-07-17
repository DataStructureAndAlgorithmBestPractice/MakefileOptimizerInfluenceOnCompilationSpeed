CC = gcc
CFLAGS = -Wall -Wextra -g
OPT = -O1
CFILES =  $(wildcard *.c)
OBJECTS = $(patsubst %.c, %.o, $(CFILES))
BINARY = Opt_lvl1

all : $(BINARY)

$(BINARY):$(OBJECTS)
	$(CC) -o $@ $^

%.o : %.c		
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJECTS) $(BINARY)

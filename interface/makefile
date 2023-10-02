CC = gcc
CFLAGS = -Wall -Werror -std=c99
LDFLAGS = -lm -lraylib

SRC = main.c
OUT = main

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC) $(LDFLAGS)

clean:
	rm -f $(OUT)

.PHONY: all clean

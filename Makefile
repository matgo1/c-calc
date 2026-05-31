CC = gcc
CFLAGS = -Wall -Wextra -std=c99

TARGET = calc

all: calc.c
	$(CC) $(CFLAGS) -o $(TARGET) calc.c

clean:
	rm -rf $(TARGET)

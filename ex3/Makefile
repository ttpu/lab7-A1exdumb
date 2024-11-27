# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -g

# Target executable name
TARGET = main

# Build target
all: $(TARGET)

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

# Clean up build files
clean:
	rm -f $(TARGET)

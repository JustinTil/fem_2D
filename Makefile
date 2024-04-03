
CC=gcc
CFLAGS= -Wall -Werror
RAYLIB_DEPS= -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
SRC_FILES= src/*.c

fem_2D: $(SRC_FILES)
	$(CC) $(CFLAGS) $(SRC_FILES) -o fem_2D $(RAYLIB_DEPS)

clean:
	rm -rf fem_2D


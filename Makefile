CC = gcc
CFLAGS = -Wall -ansi # Will add -Werror later (hassle when developing)
SRC = src/main.c # Subject to change as the project becomes more comnplex
OUT = compact_secure_disk.out
LIBS = -lm

# Detect OS
ifeq ($(OS),Windows_NT)
    RM = del /Q
    OUT := $(subst /,\,$(OUT))  # Convert slashes for Windows
else
    RM = rm -f
endif

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT) $(LIBS)

clean:
	rm -f $(OUT)
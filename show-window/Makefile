CC = clang
CLANG_SDL = -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer
SOURCES = main.c
TARGET_DIR = ./build
TARGET = $(TARGET_DIR)/main

.PHONY: build


build:
	$(CC) $(CLANG_SDL) $(SOURCES) -o $(TARGET)

clean:
	rm $(TARGET)

init:
	mkdir $(TARGET_DIR)

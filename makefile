CC= gcc
CFLAGS= -Wall -O2

ZIQ= src/ziq.c
ALL_FILES= src/lexer.c src/parser.c src/state.c

OUTPUT= -o ziq.exe

all:
	$(CC) $(ZIQ) $(ALL_FILES) $(OUTPUT)

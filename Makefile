CFLAGS=-Wall -g
BIN=bin

$(BIN)/%: %.c
	cc $(CFLAGS) $< -o $@

clean:
	rm $(BIN)/*

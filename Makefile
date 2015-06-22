CFLAGS=-Wall -g
BIN=bin

$(BIN)/ex%: ex%.c
	cc $(CFLAGS) $< -o $@

clean:
	rm $(BIN)/*

CC = gcc
CFLAGS = -Wall -g
LIB = -lpthread

SRC_PATH = ./src
SRC = ${shell ls $(SRC_PATH)/*.c}

BIN = bin
TARGET = demo

all:
ifeq ("bin", $(wildcard $(BIN)))    # if语句的前边不能用tab，否则会报错 Syntax error: word unexpected (expecting ")")
    @echo "already has the directory : bin"
else
	mkdir -p $(BIN)
endif

	$(CC) $(SRC) -o $(BIN)/$(TARGET) $(CFLAGS) $(LIB)

.PHONY:clean
clean:
	@echo "clean up"
	rm -rf $(BIN)

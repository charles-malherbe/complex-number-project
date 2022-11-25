##
## Created by Charles MALHERBE and Arthur PERRET on 2022/11/22
##

SRC = ./src/*.cpp

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++11
DOCS = ./docs/Doxyfile

all: docs
	$(CC) $(CFLAGS) main.cpp $(SRC) -o main

docs: clean
	doxygen ./docs/Doxyfile

clean:
	rm -f $(OBJ) main
	rm -rf ./html ./latex

.PHONY: clean

NAME = dsl
CC = gcc
CFLAGS = -Iinc
SRC = $(wildcard src/*.c)
OBJ = $(SRC:src/%.c=obj/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@

obj/%.o: src/%.c 
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj $(NAME)

re: clean all

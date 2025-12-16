CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinc

NAME = dsl

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

SRC = $(SRC_DIR)/dsl.c 			\
	$(SRC_DIR)/error.c 			\
	$(SRC_DIR)/lexic.c 			\
	$(SRC_DIR)/utils.c			\
	$(SRC_DIR)/parser.c			\
	$(SRC_DIR)/filter.c			\
	$(SRC_DIR)/executor.c		\
	$(SRC_DIR)/ft_split.c 		\
	$(SRC_DIR)/get_input.c		\
	$(SRC_DIR)/creat_list.c		\
	$(SRC_DIR)/syntax_error.c

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o  $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

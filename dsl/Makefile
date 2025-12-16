# =======================
#        COMPILER
# =======================
CC      = cc
CFLAGS  = -Wall -Wextra -Werror -Iinc

# =======================
#        PROJECT
# =======================
NAME    = dsl

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = inc

SRC = $(SRC_DIR)/dsl.c \
      $(SRC_DIR)/error.c \
      $(SRC_DIR)/lexic.c \
      $(SRC_DIR)/utils.c \
      $(SRC_DIR)/parser.c \
      $(SRC_DIR)/filter.c \
      $(SRC_DIR)/executor.c \
      $(SRC_DIR)/ft_split.c \
      $(SRC_DIR)/get_input.c \
      $(SRC_DIR)/creat_list.c \
      $(SRC_DIR)/syntax_error.c

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# =======================
#        COLORS
# =======================
RESET   = \033[0m
BOLD    = \033[1m
GREEN   = \033[32m
YELLOW  = \033[33m
BLUE    = \033[34m
RED     = \033[31m
CYAN    = \033[36m

# =======================
#        RULES
# =======================
all: banner $(NAME)

banner:
	@echo "$(BOLD)$(CYAN)"
	@echo "================================="
	@echo "      HUMAN CODER Daemon_<       "
	@echo "================================="
	@echo "$(RESET)"

$(NAME): $(OBJ)
	@echo "$(BLUE)[Linking]$(RESET) $(NAME)"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)✔ Build complete$(RESET)"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)$(BOLD)[Creating]$(RESET) obj directory"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo "$(CYAN)$(BOLD)[Compiling]$(RESET) $<"
	@$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	@echo "$(RED)$(BOLD)[Cleaning objects]$(RESET)"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "$(RED)[Removing binary]$(RESET)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re banner


# -*- MakeFile -*-

NAME = so_long

SRC = so_long.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR = ./libft
PRINTF_DIR = ./ft_printf
MLX_DIR = ./MLX42
GLFW_LINK = -lglfw -L /Users/${USER}/.brew/opt/glfw/lib/

LIBFT = ./libft/libft.a
PRINTF = ./ft_printf/libftprintf.a
MLX = ./MLX42/libmlx42.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
MAKE = make

all: $(NAME)

$(OBJ): %.o: %.c
	@$(CC) $(CFLAGS) -I $(LIBFT_DIR) -I $(PRINTF_DIR) -I $(MLX_DIR) -c $< -o $@

$(NAME): $(OBJ)
	@echo "\033[0;33m\n*-*-* CHECKING AND COMPILING LIBFT *-*-*\n\033[0m"
	@$(MAKE) -C $(LIBFT_DIR)
	@echo "\033[0;33m\n*-*-* CHECKING AND COMPILING FT_PRINTF *-*-*\n\033[0m"
	@$(MAKE) -C $(PRINTF_DIR)
	@echo "\033[0;33m\n*-*-* CHECKING AND COMPILING MLX42 *-*-*\n\033[0m"
	@$(MAKE) -C $(MLX_DIR)
	@echo "\033[0;33m\n*-*-* CHECKING AND COMPILING SO_LONG *-*-*\n\033[0m"
	@$(CC) $(CFLAGS) $(LIBFT) $(PRINTF) $(MLX) $(OBJ) $(GLFW_LINK) -o $(NAME)

clean:
	@echo "\033[0;33m\n*-*-* REMOVING OBJECTS *-*-*\n\033[0m"
	@$(RM) $(OBJ)
	@make clean -C $(LIBFT_DIR)
	@make clean -C $(PRINTF_DIR)

fclean: clean
	@echo "\033[0;33m\n*-*-* REMOVING EXECUTABLE *-*-*\n\033[0m"
	@$(RM) $(NAME)
	@make fclean -C $(LIBFT_DIR)
	@make fclean -C $(PRINTF_DIR)

re: fclean
	@$(MAKE) all

leaks: $(NAME)
	leaks -atExit -q -- ./$(NAME)

.PHONY: all clean fclean re NAME
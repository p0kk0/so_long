# -*- MakeFile -*-

NAME = so_long

SRC = so_long.c

OBJ = $(SRC:.c=.o)

LIBFT_DIR = ./libft
PRINTF_DIR = ./ft_printf
MLX_DIR = ./MLX42

LIBFT = ./libft/libft.a
PRINTF = ./ft_printf/libftprintf.a
MLX = ./MLX42/libmlx42.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
MAKE = make

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n	 ##### Checking/compiling Libft library #####\n"
	$(MAKE) -C $(LIBFT_DIR)
	@echo "\n	 ##### Checking/compiling ft_printf library #####\n"
	$(MAKE) -C $(PRINTF_DIR)
	@echo "\n	 ##### Checking/compiling MLX42 library #####\n"
	$(MAKE) -C $(MLX_DIR)
	@echo "\n	 ##### Checking/compiling so_long prgram #####\n"
	$(CC) $(CFLAGS) $(LIBFT) $(PRINTF) $(MLX) $(OBJ) -lglfw -L /Users/${USER}/.brew/opt/glfw/lib/ -o $(NAME)

clean:
	$(RM) $(OBJ)
	make clean -C $(LIBFT_DIR)
	make clean -C $(PRINTF_DIR)

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_DIR)
	make fclean -C $(PRINTF_DIR)

re: fclean
	$(MAKE) all

.PHONY: all NAME clean fclean re bonus
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 19:21:27 by ibeliaie          #+#    #+#              #
#    Updated: 2023/05/30 12:55:29 by ibeliaie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

SRC =	ft_printf.c    \
		txt_util.c  \
		nbr_util.c  \
		hex_util.c

OBJ = $(SRC:.c=.o)

LIBFT_OBJS = libft/*.o

CC = @gcc
FLAGS = -Wall -Wextra -Werror

RM = @rm -rf
AR = @ar rcs

YELLOW = \033[0;93m
PURPLE = \033[0;35m
CYAN = \033[0;36m
DEF_COLOR = \033[0;37m

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C ./libft
	@cp libft/libft.a $(NAME)
	@$(AR) $(NAME) $(OBJ) $(LIBFT_OBJS)
	@echo "$(YELLOW)✨ printf compiled successfully ✨$(DEF_COLOR)"

clean:
	$(RM) $(OBJ) $(LIBFT_OBJS) a.out
	@echo "$(PURPLE)🧹 object files cleaned 🧹$(DEF_COLOR)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(CYAN)🧼 everything cleaned 🧼$(DEF_COLOR)"

re: fclean all

.PHONY: all clean fclean re

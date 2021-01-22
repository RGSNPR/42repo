# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 19:09:44 by ksiren            #+#    #+#              #
#    Updated: 2021/01/22 16:30:50 by ksiren           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = @gcc

CFLAGS = -c -Wall -Wextra -Werror

RM = rm -f

SRC = ft_printf.c \
		ft_checktypes.c \
		ft_converts.c \
		ft_flags.c \

OBJ = $(SRC:.c=.o)


$(NAME): $(OBJ)
	@cd libft && make && cd ..
	@$(CC) $(CFLAGS) $(SRC) $(LIBS)
	@ar rc $(NAME) $(OBJ)
	@echo "---Built---"

all: $(NAME)

clean:
	@$(RM) $(OBJ) $(OBJL)
	@cd libft && make clean
	@echo "---cleaned---"

fclean: clean

	@$(RM) $(NAME)
	@cd libft && make fclean

re: fclean all

.PHONY: clean fclean all re

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 19:09:44 by ksiren            #+#    #+#              #
#    Updated: 2020/11/25 18:58:57 by ksiren           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = get_next_line.a

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

RM = rm -f

SRC = get_next_line.c get_next_line_utils.c

OBJ = $(SRC:.c=.o)


$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(SRC)
		ar rc $(NAME) $(OBJ)

all: $(NAME)

bonus: $(NAME)
		$(CC) $(CFLAGS) $(BONUS)
		ar rc $(NAME) $(OBJBNS)

clean:
		$(RM) $(OBJ) $(OBJBNS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus

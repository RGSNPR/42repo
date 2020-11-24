# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksiren <ksiren@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 19:09:44 by ksiren            #+#    #+#              #
#    Updated: 2020/11/24 17:31:50 by ksiren           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

RM = rm -f

SRC = ft_atoi.c ft_strlcat.c ft_strlen.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcpy.c \
		ft_memccpy.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_split.c \

BONUS = ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstsize.c ft_lstlast.c \
		ft_lstiter.c ft_lstmap.c


OBJ = $(SRC:.c=.o)

OBJBNS = $(BONUS:.c=.o)


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

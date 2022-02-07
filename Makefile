# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebetrix <ebetrix@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 11:13:17 by ebetrix           #+#    #+#              #
#    Updated: 2022/02/07 14:42:48 by ebetrix          ###   ########.ch        #
#                                                                              #
# **************************************************************************** #

.RECIPEPREFIX = <

NAME = libftprinft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

SOURCES = ft_characters.c \
	  ft_numbers.c \
	  ft_printf.c

OBJECTS = $(SOURCES:.c=.o)

%.o: %.c
	< $(CC) -c $(CFLAGS) $(SOURCES) -o $(NAME)

all: $(NAME)

$(NAME): $(OBJECTS)
	< ar rc $(NAME) $(OBJECTS)
	< ranlib $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)


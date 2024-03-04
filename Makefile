# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 13:45:18 by bfallah-          #+#    #+#              #
#    Updated: 2024/03/04 14:22:42 by bfallah-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
ARCHIVE = push_swap.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
MAKE_LIB = ar -rcs

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(ARCHIVE)
	$(CC) $< -o $@

$(ARCHIVE) : $(OBJS)
	$(MAKE_LIB) $(ARCHIVE) $^

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS) $(ARCHIVE)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclea re

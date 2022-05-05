# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wonjo <wonjo@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 21:50:33 by wonjo             #+#    #+#              #
#    Updated: 2022/05/04 20:46:53 by wonjo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = do-op

SRCDIR = srcs
INCDIR = includes

SRCS = $(SRCDIR)/main.c $(SRCDIR)/func.c $(SRCDIR)/operator.c
OBJS = $(SRCS:.c=.o)

all:
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -I $(INCDIR)

$(NAME): $(OBJS)
	ar cr $@ $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean all fclean re

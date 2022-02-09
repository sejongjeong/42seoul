# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 18:49:02 by sejeong           #+#    #+#              #
#    Updated: 2021/06/18 17:59:55 by sejeong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES : .c .o

NAME = libft.a
CC = gcc
CFLAG = -Wall -Wextra -Werror
SRCS =	ft_strlen.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putnbr_fd.c

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $@ $^

%.o : %.c
	$(CC) $(CFLAG) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

 .PHONY : all clean fclean re
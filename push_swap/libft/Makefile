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
SRCS =	ft_strlen.c			\
		ft_strchr.c			\
		ft_split.c			\
		ft_putchar_fd.c		\
		ft_putstr_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		arg_c.c				\
		arg_p.c				\
		arg_per.c			\
		arg_s.c				\
		arg_u.c				\
		args_d_i.c			\
		args_x.c			\
		ft_printf.c			\
		hexa_conv.c			\
		utils.c				\
		get_next_line.c		\
		get_next_line_utils.c

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
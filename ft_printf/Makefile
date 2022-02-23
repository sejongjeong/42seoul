# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/07 18:12:36 by sejeong           #+#    #+#              #
#    Updated: 2022/02/09 19:02:13 by sejeong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIB_PATH 	= ./includes
LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a
LIBFTPRINTF = ${LIB_PATH}/ft_printf.h

CC 		= gcc

FLAGS 		= -Wall -Werror -Wextra

REMOVE 		= rm -f
INCLUDE 	= -I ${LIB_PATH}

SRCS_PATH	= ./srcs
SRCS 		=	${SRCS_PATH}/arg_c.c		\
				${SRCS_PATH}/arg_p.c		\
				${SRCS_PATH}/arg_per.c		\
				${SRCS_PATH}/arg_s.c		\
				${SRCS_PATH}/arg_u.c		\
				${SRCS_PATH}/args_d_i.c		\
				${SRCS_PATH}/args_x.c		\
				${SRCS_PATH}/ft_printf.c	\
				${SRCS_PATH}/hexa_conv.c	\
				${SRCS_PATH}/utils.c
				
OBJS 		= $(SRCS:.c=.o)

all:		${NAME}

${NAME}: 	${OBJS} ${LIBFT}
		ar rcs ${NAME} ${OBJS}

${LIBFT}:
		make -C $(LIBFT_DIR)
		cp ${LIBFT} ${NAME}

.c.o:
		${CC} -c ${FLAGS} $< -o ${<:.c=.o} ${INCLUDE} 


clean:
		make clean -C $(LIBFT_DIR)
		${REMOVE} ${OBJS}

fclean:	clean
		make fclean -C $(LIBFT_DIR)
		${REMOVE} ${NAME}

re :	fclean all

.PHONY:	all clean fclean re
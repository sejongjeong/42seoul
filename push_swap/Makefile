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

NAME		= push_swap
BNAME 		= checker

LIB_PATH 	= ./includes
LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a
LIBFTPRINTF = ${LIB_PATH}/push_swap.h

CC 		= gcc

FLAGS 		= -Wall -Werror -Wextra

REMOVE 		= rm -f
INCLUDE 	= -I ${LIB_PATH}

SRCS_PATH	= ./srcs
SRCS_CPATH 	= ./srcs/co
SRCS_BPATH	= ./srcs/checker

SRCS 		=	${SRCS_PATH}/push_swap.c	\
				${SRCS_PATH}/quick_sort.c	\
				${SRCS_PATH}/sort.c

SRCS_CO		=	${SRCS_CPATH}/push.c		\
				${SRCS_CPATH}/rotate.c		\
				${SRCS_CPATH}/rrotate.c		\
				${SRCS_CPATH}/swap.c		\
				${SRCS_CPATH}/utils.c		\

SRCS_CHECKER=	${SRCS_BPATH}/checker.c		\
				${SRCS_BPATH}/checker_utils.c


				
OBJS 		= $(SRCS:.c=.o)
OBJS_CO		= $(SRCS_CO:.c=.o)
OBJS_CHECKER= $(SRCS_CHECKER:.c=.o)

all:		${NAME}

${NAME}: 	${OBJS} ${OBJS_CO} ${LIBFT}
		ar rcs ${NAME} ${OBJS} ${OBJS_CO}

${LIBFT}:
		make -C $(LIBFT_DIR)
		cp ${LIBFT} ${NAME}

${BNAME}:	${OBJS_CHECKER} ${OBJS_CO} ${BLIBFT}
		ar rcs ${BNAME} ${OBJS_CHECKER} ${OBJS_CO}

${BLIBFT}:
		make -C $(LIBFT_DIR)
		cp ${BLIBFT} ${BNAME}

.c.o:
		${CC} -c ${FLAGS} $< -o ${<:.c=.o} ${INCLUDE} 


clean:
		make clean -C $(LIBFT_DIR)
		${REMOVE} ${OBJS} ${OBJS_CO} ${OBJS_CHECKER}

fclean:	clean
		make fclean -C $(LIBFT_DIR)
		${REMOVE} ${NAME} ${BNAME}

re :	fclean all

bonus: checker

.PHONY:	all checker bonus clean fclean re
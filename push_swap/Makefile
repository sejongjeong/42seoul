# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/17 10:32:13 by sejeong           #+#    #+#              #
#    Updated: 2022/03/03 03:32:13 by sejeong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL		=	/bin/bash

NAME		= push_swap
BNAME		= checker
INC			= inc
HEADER		= -I inc
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -g
RM			= rm -f

PSW_DIR		=	push_swap/
MAND_FILES	=	push_swap sortage quicksort
COMM_DIR	=	common/
COMM_FILES	=	swap_moves rotation_moves rev_rot_moves push_moves utils
BONUS_DIR	=	bonus/
BONUS_FILES	=	checker bonus_utils

SRC_FILES	=	$(addprefix $(PSW_DIR), $(MAND_FILES))
COM_FILES	=	$(addprefix $(COMM_DIR), $(COMM_FILES))
SRC_BFILES	=	$(addprefix $(BONUS_DIR), $(BONUS_FILES))

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

COMMON 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(COM_FILES)))
COBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(COM_FILES)))

BSRC		=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_BFILES)))
BOBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_BFILES)))

OBJF		=	.cache_exists

start:
		make all

all:		$(NAME)

$(NAME):	$(OBJ) $(COBJ) $(OBJF)
			make -C $(LIBFT)
			cp libft/libft.a .
			$(CC) $(CFLAGS) $(OBJ) $(COBJ) $(HEADER) libft.a -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(OBJF)
			$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

$(OBJF):
			mkdir -p $(OBJ_DIR)
			mkdir -p $(OBJ_DIR)$(PSW_DIR)
			mkdir -p $(OBJ_DIR)$(COMM_DIR)
			mkdir -p $(OBJ_DIR)$(BONUS_DIR)
			touch $(OBJF)

clean:
			$(RM) -r $(OBJ_DIR)
			make clean -C $(LIBFT)
			$(RM) $(OBJF)

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(BNAME)
			$(RM) libft.a
			$(RM) $(LIBFT)/libft.a

re:			fclean all

bonus:
		make allbonus

allbonus:		$(BNAME)

$(BNAME):	$(BOBJ) $(COBJ)
			make -C $(LIBFT)
			cp libft/libft.a .
			$(CC) $(CFLAGS) $(BSRC) $(COMMON) $(HEADER) libft.a -o $(BNAME)

.PHONY:		all clean fclean re
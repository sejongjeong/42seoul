# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sejeong <sejeong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/03 03:37:12 by sejeong           #+#    #+#              #
#    Updated: 2022/03/03 03:37:12 by sejeong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL		=	/bin/bash

#Standard

NAME		=	libft.a
INCLUDE		=	inc/
SRC_DIR 	=	src/
OBJ_DIR		=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs
ECHO		=	echo -e

#Sources

FTSTR_DIR	=	ft_str/
FTSTR		=	ft_split  \
				ft_strlen \
				ft_strchr \
				ft_strcmp

FTPUT_DIR	=	ft_put/
FTPUT		=	ft_putchar_fd ft_putstr_fd				

FTTO_DIR	=	ft_to/
FTTO		=	ft_itoa

GNL_DIR		=	gnl/
GNL			=	get_next_line get_next_line_utils

FTPRINTF_DIR	= ft_printf/
FTPRINTF	=	ft_printf ft_printf_utils ft_print_hex ft_print_ptr ft_print_unsigned

SRC_FILES+=$(addprefix $(FTTO_DIR),$(FTTO))
SRC_FILES+=$(addprefix $(FTSTR_DIR),$(FTSTR))
SRC_FILES+=$(addprefix $(GNL_DIR),$(GNL))
SRC_FILES+=$(addprefix $(FTPUT_DIR),$(FTPUT))
SRC_FILES+=$(addprefix $(FTPRINTF_DIR),$(FTPRINTF))

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

###

OBJF		=	.cache_exists

start:
		make all

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o : $(SRC_DIR)%.c | $(OBJF)
			$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
			mkdir -p $(OBJ_DIR)
			mkdir -p $(OBJ_DIR)$(FTTO_DIR)
			mkdir -p $(OBJ_DIR)$(FTSTR_DIR)
			mkdir -p $(OBJ_DIR)$(GNL_DIR)
			mkdir -p $(OBJ_DIR)$(FTPUT_DIR)
			mkdir -p $(OBJ_DIR)$(FTPRINTF_DIR)
			touch $(OBJF)

clean:
			$(RM) -r $(OBJ_DIR)
			$(RM) $(OBJF)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

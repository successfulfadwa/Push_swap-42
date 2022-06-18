# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fadwa <fadwa@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 17:48:12 by fadwa             #+#    #+#              #
#    Updated: 2022/06/15 18:27:27 by fadwa            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC				=	getnext_line/get_next_line_utils.c getnext_line/get_next_line.c \
	draw_copy.c	exit_game_copy.c	gameplay_copy.c	init_copy.c	map_validate_copy.c player_update_copy.c	read_map_copy.c	push_swap_copy.c

OBJ				=	$(addprefix obj/, ${SRC:.c=.o})


CC				=	cc

CFLAGS 			=	-Wall -Werror -Wextra -g

RM 				=	rm -f

LIBS			=	push_swap.h

NAME			=	push_swap

LIBRARY = libft/libft.a


all:	$(NAME)

$(NAME) :$(LIBRARY)	$(OBJ) $(LIBS)
	$(CC) $(CFLAGS) $(LIBRARY) $(OBJ) -g -o $(NAME)


$(LIBRARY) :
	make -C libft

obj/%.o: %.c
	@ mkdir -p obj/getnext_line
	$(CC)  -c $< -o $@


fclean:
	make fclean -C libft
	$(RM) $(OBJ) $(NAME)

re:			fclean $(OBJ) $(NAME)

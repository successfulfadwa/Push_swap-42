# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/19 01:45:00 by faljaoui          #+#    #+#              #
#    Updated: 2022/06/19 05:03:58 by faljaoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 

SRC				=	getnext_line/get_next_line_utils.c getnext_line/get_next_line.c \
	push_swap.c isvalidate.c push_swap.c init.c

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

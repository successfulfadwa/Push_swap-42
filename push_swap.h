/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:25:29 by fadwa             #+#    #+#             */
/*   Updated: 2022/06/19 05:19:16 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include "libft/libft.h"
# include "getnext_line/get_next_line.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648

typedef struct s_stack
{
	int		capacity;
	int		top;
	int		*stack;
	char	c;
}	t_stack;

int	is_sorted(t_stack *stack);
static int	is_integer(char **argv);
static int	is_duplicate(char **argv);
int	validate(char **argv);
t_stack	*create_stack(int capacity, char c);
void	init_stack(t_stack *stack, char **argv);




#endif
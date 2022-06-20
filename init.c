/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 04:54:45 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/19 04:57:06 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(int capacity, char c)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->capacity = capacity;
	
	stack->top = -1;
	stack->stack = malloc(capacity * sizeof(int));
	stack->c = c;
	return (stack);
}

void	init_stack(t_stack *stack, char **argv)
{
	int	i;
	int	j;
	int r;
	int u ;







	
	i = 1;
	j = stack->capacity - 1;
	//printf("%d\n",j);
		//printf("%d\n",u);
	while (j >= 0)
	{
		stack->stack[j] = ft_atoi(argv[i]);
		//printf("%s\n",argv[i]);
		r = stack->top++;
		i++;
		j--;
	}
		u = stack->top;
		//printf("%d\n",u);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faljaoui <faljaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 05:07:06 by faljaoui          #+#    #+#             */
/*   Updated: 2022/06/20 20:59:36 by faljaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

int	main(int argc, char *argv[])
{ 
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	if (!validate(argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	stack_a = create_stack(argc - 1, 'a');
	stack_b = create_stack(argc - 1, 'b');
    //**CONTINUE ///
    }
    
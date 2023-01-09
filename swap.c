/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:14:47 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/06 16:40:40 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack_a(long *stack_a, int *numbers_in_stack_a)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (numbers_in_stack_a[1] > 1)
	{
		temporary[0] = stack_a[0];
		stack_a[0] = stack_a[1];
		stack_a[1] = temporary[0];
	}
	free(temporary);
	write(1, "sa\n", 3);
}

void	swap_stack_b(long *stack_b, int *numbers_in_stack_b)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (*numbers_in_stack_b > 1)
	{
		temporary[0] = stack_b[0];
		stack_b[0] = stack_b[1];
		stack_b[1] = temporary[0];
	}
	free(temporary);
	write(1, "sb\n", 3);
}

void	swap_both_stacks(long *stk_a, long *stk_b, int *n_in_a, int *n_in_b)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (n_in_a[1] > 1)
	{
		temporary[0] = stk_a[0];
		stk_a[0] = stk_a[1];
		stk_a[1] = temporary[0];
	}
	if (*n_in_b > 1)
	{
		temporary[0] = stk_b[0];
		stk_b[0] = stk_b[1];
		stk_b[1] = temporary[0];
	}
	free(temporary);
	write(1, "ss\n", 3);
}

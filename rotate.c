/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:14:02 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/08 11:44:22 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack_a(long *stack_a, int *numbers_in_stack_a)
{
	int		i;
	long	*temporary;

	i = 0;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stack_a[0];
	while (i < numbers_in_stack_a[1])
	{
		stack_a[i] = stack_a[i + 1];
		i++;
	}
	stack_a[numbers_in_stack_a[1] - 1] = *temporary;
	free(temporary);
	write(1, "ra\n", 3);
}

void	rotate_stack_b(long *stack_b, int *numbers_in_stack_b)
{
	int		i;
	long	*temporary;

	i = 0;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stack_b[0];
	while (i < *numbers_in_stack_b)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}
	stack_b[*numbers_in_stack_b - 1] = *temporary;
	free(temporary);
	write(1, "rb\n", 3);
}

void	rotate_both_stks(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b)
{
	int		i;
	long	*temporary;

	i = 0;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stk_a[0];
	while (i < n_stk_a[1])
	{
		stk_a[i] = stk_a[i + 1];
		i++;
	}
	stk_a[n_stk_a[1] - 1] = *temporary;
	i = 0;
	*temporary = stk_b[0];
	while (i < *n_stk_b)
	{
		stk_b[i] = stk_b[i + 1];
		i++;
	}
	stk_b[*n_stk_b - 1] = *temporary;
	free(temporary);
	write(1, "rra\n", 4);
}

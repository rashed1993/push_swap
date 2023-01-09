/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:13:01 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/05 17:35:13 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revers_rotate_stack_a(long *stack_a, int *numbers_in_stack_a)
{
	int		i;
	long	*temporary;

	i = numbers_in_stack_a[1] - 1;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stack_a[numbers_in_stack_a[1] - 1];
	while (i > 0)
	{
		stack_a[i] = stack_a[i - 1];
		i--;
	}
	stack_a[0] = *temporary;
	free(temporary);
	write(1, "rra\n", 4);
}

void	reverse_rotate_stack_b(long *stack_b, int *numbers_in_stack_b)
{
	int		i;
	long	*temporary;

	i = *numbers_in_stack_b - 1;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stack_b[*numbers_in_stack_b - 1];
	while (i > 0)
	{
		stack_b[i] = stack_b[i - 1];
		i--;
	}
	stack_b[0] = *temporary;
	free(temporary);
	write(1, "rrb\n", 4);
}

void	rever_rotat_stks(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b)
{
	int		i;
	long	*temporary;

	i = n_stk_b[1] - 1;
	temporary = (long *)malloc(sizeof(long));
	*temporary = stk_a[n_stk_a[1] - 1];
	while (i > 0)
	{
		stk_a[i] = stk_a[i - 1];
		i--;
	}
	stk_a[0] = *temporary;
	i = 0;
	*temporary = stk_b[0];
	while (i < *n_stk_b)
	{
		stk_b[i] = stk_b[i + 1];
		i++;
	}
	stk_b[*n_stk_b - 1] = *temporary;
	free(temporary);
	write(1, "rr\n", 3);
}

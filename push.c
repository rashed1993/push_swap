/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:12:11 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/05 17:36:29 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack_a(long *stk_a, long *stk_b, int *num_stk_a, int *num_stk_b)
{
	int	i;

	(num_stk_a[1])++;
	i = num_stk_a[1] - 1;
	while (i > 0)
	{
		stk_a[i] = stk_a[i - 1];
		i--;
	}
	stk_a[0] = stk_b[0];
	i = 0;
	while (i < *num_stk_b)
	{
		stk_b[i] = stk_b[i + 1];
		i++;
	}
	(*num_stk_b)--;
	if (*num_stk_b == 0)
		stk_b = NULL;
	write(1, "pa\n", 3);
}

void	push_stack_b(long *stk_a, long *stk_b, int *num_stk_a, int *num_stk_b)
{
	int	i;

	(*num_stk_b)++;
	i = *num_stk_b - 1;
	while (i > 0)
	{
		stk_b[i] = stk_b[i - 1];
		i--;
	}
	stk_b[0] = stk_a[0];
	i = 0;
	while (i < num_stk_a[1])
	{
		stk_a[i] = stk_a[i + 1];
		i++;
	}
	(num_stk_a[1])--;
	if (num_stk_a[1] == 0)
		stk_a = NULL;
	write(1, "pb\n", 3);
}

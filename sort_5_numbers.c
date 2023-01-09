/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:24:51 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/05 16:42:44 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_stack_a_radix(long *stack_a, int *numbers_in_stack_a)
{
	rotate_stack_a(stack_a, numbers_in_stack_a);
	rotate_stack_a(stack_a, numbers_in_stack_a);
}

void	reverse_rotate_stack_a_radix(long *stack_a, int *numbers_in_stack_a)
{
	revers_rotate_stack_a(stack_a, numbers_in_stack_a);
	revers_rotate_stack_a(stack_a, numbers_in_stack_a);
}

void	first_stack(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b)
{
	if (stk_b[0] < stk_a[0])
	{
		push_stack_a(stk_a, stk_b, n_stk_a, n_stk_b);
	}
	else if ((stk_b[0] > stk_a[0]) && (stk_b[0] < stk_a[1]))
	{
		rotate_stack_a(stk_a, n_stk_a);
		push_stack_a(stk_a, stk_b, n_stk_a, n_stk_b);
		revers_rotate_stack_a(stk_a, n_stk_a);
	}
	else if ((stk_b[0] > stk_a[1]) && (stk_b[0] < stk_a[2]))
	{
		revers_rotate_stack_a(stk_a, n_stk_a);
		push_stack_a(stk_a, stk_b, n_stk_a, n_stk_b);
		revers_rotate_stack_a(stk_a, n_stk_a);
		revers_rotate_stack_a(stk_a, n_stk_a);
	}
	else if (stk_b[0] > stk_a[2])
	{
		push_stack_a(stk_a, stk_b, n_stk_a, n_stk_b);
		rotate_stack_a(stk_a, n_stk_a);
	}
}

void	second_stack(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b)
{
	if (stk_b[0] < stk_a[0])
		push_stack_a(stk_a, stk_b, n_stk_a, n_stk_b);
	else if ((stk_b[0] > stk_a[0]) && (stk_b[0] < stk_a[1]))
	{
		rotate_stack_a(stk_a, n_stk_a);
		push_stack_a(stk_a, stk_b, n_stk_a, n_stk_b);
		revers_rotate_stack_a(stk_a, n_stk_a);
	}
	else if ((stk_b[0] > stk_a[1]) && (stk_b[0] < stk_a[2]))
	{
		rotate_stack_a(stk_a, n_stk_a);
		push_stack_a(stk_a, stk_b, n_stk_a, n_stk_b);
		swap_stack_a(stk_a, n_stk_a);
		revers_rotate_stack_a(stk_a, n_stk_a);
	}
	else if ((stk_b[0] > stk_a[2]) && (stk_b[0] < stk_a[3]))
	{
		revers_rotate_stack_a(stk_a, n_stk_a);
		push_stack_a(stk_a, stk_b, n_stk_a, n_stk_b);
		rotate_stack_a_radix(stk_a, n_stk_a);
	}
	else if (stk_b[0] > stk_a[3])
		parameters(stk_a, stk_b, n_stk_a, n_stk_b);
}

void	sort_5_nums(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b)
{
	push_stack_b(stk_a, stk_b, n_stk_a, n_stk_b);
	push_stack_b(stk_a, stk_b, n_stk_a, n_stk_b);
	sort_3_nums(stk_a, n_stk_a);
	while (*n_stk_b != 0)
	{
		if (n_stk_a[1] == 3)
		{	
			first_stack(stk_a, stk_b, n_stk_a, n_stk_b);
		}
		else if (n_stk_a[1] == 4)
		{
			second_stack(stk_a, stk_b, n_stk_a, n_stk_b);
		}
	}
}

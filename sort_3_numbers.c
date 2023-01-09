/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:24:02 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/05 16:41:53 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3_nums(long *stk_a, int *n_stk_a)
{
	if ((stk_a[0] > stk_a[1]) && (stk_a[1] < stk_a[2]) && (stk_a[0] < stk_a[2]))
	{
		swap_stack_a(stk_a, n_stk_a);
	}
	if ((stk_a[0] > stk_a[1]) && (stk_a[1] > stk_a[2]) && (stk_a[0] > stk_a[2]))
	{
		swap_stack_a(stk_a, n_stk_a);
		revers_rotate_stack_a(stk_a, n_stk_a);
	}
	if ((stk_a[0] > stk_a[1]) && (stk_a[1] < stk_a[2]) && (stk_a[0] > stk_a[2]))
	{
		rotate_stack_a(stk_a, n_stk_a);
	}
	if ((stk_a[0] < stk_a[1]) && (stk_a[1] > stk_a[2]) && (stk_a[0] < stk_a[2]))
	{
		swap_stack_a(stk_a, n_stk_a);
		rotate_stack_a(stk_a, n_stk_a);
	}
	if ((stk_a[0] < stk_a[1]) && (stk_a[1] > stk_a[2]) && (stk_a[0] > stk_a[2]))
	{
		revers_rotate_stack_a(stk_a, n_stk_a);
	}
}

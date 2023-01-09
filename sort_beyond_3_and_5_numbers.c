/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_beyond_3_and_5_numbers.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:25:38 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/05 13:22:04 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_a_section_of_the_stack(long *array, int *stack_size)
{
	long	i;
	long	j;
	long	temporary;

	i = 0;
	j = 0;
	while (i < stack_size[0])
	{
		j = i + 1;
		while (j < stack_size[0])
		{
			if (array[i] > array[j])
			{
				temporary = array[i];
				array[i] = array[j];
				array[j] = temporary;
			}
			j++;
		}
		i++;
	}
}

void	swp_stk_a_1st_tim(long *cpy, long *cpy_swp_stk_a,
			long *stk_a, int *n_stk_a)
{
	int	i;

	i = 0;
	while (i < n_stk_a[0])
	{
		cpy[i] = stk_a[i];
		cpy_swp_stk_a[i] = stk_a[i];
		i++;
	}
}

void	swp_stk_a_2nd_time(long *cpy, long *cpy_swp_stk_a,
			long *stk_a, int *n_stk_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n_stk_a[1])
	{
		j = 0;
		while (j < n_stk_a[0])
		{
			if (cpy_swp_stk_a[i] == cpy[j])
					stk_a[i] = j;
			j++;
		}
		++i;
	}
}

void	swp_stk_a_3rd_time(long *stk_a, long *stk_b,
			int *n_stk_a, int *n_stk_b)
{
	int	maximum_number;
	int	maximum_bits;
	int	loop_through[2];

	maximum_number = n_stk_a[1] - 1;
	maximum_bits = 0;
	loop_through[0] = 0;
	loop_through[1] = 0;
	while ((maximum_number >> maximum_bits) != 0)
		++maximum_bits;
	while (loop_through[0] < maximum_bits)
	{
		loop_through[1] = 0;
		while (loop_through[1] < n_stk_a[0])
		{
			if (((stk_a[0] >> loop_through[0]) & 1) == 1)
				rotate_stack_a(stk_a, n_stk_a);
			else
				push_stack_b(stk_a, stk_b, n_stk_a, n_stk_b);
			++loop_through[1];
		}
		while (*n_stk_b != 0)
			push_stack_a(stk_a, stk_b, n_stk_a, n_stk_b);
		++loop_through[0];
	}
}

void	sort_beyon_3_5(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b)
{
	long	*copy;
	long	*copy_swap_stack_a;

	copy = (long *)malloc(n_stk_a[0] * sizeof(long));
	copy_swap_stack_a = (long *)malloc(n_stk_a[0] * sizeof(long));
	swp_stk_a_1st_tim(copy, copy_swap_stack_a, stk_a, n_stk_a);
	sort_a_section_of_the_stack(copy, n_stk_a);
	swp_stk_a_2nd_time(copy, copy_swap_stack_a, stk_a, n_stk_a);
	free(copy);
	free(copy_swap_stack_a);
	swp_stk_a_3rd_time(stk_a, stk_b, n_stk_a, n_stk_b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_stack_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:18:26 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/08 11:44:12 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_stack_sorted(long *stack_a, int *numbers_in_stack_a)
{
	int		i;
	int		j;
	long	max;

	i = 1;
	j = 0;
	max = stack_a[0];
	while (i < numbers_in_stack_a[1])
	{
		if (stack_a[i] > max)
		{
			max = stack_a[i];
			j++;
		}
		i++;
	}
	if (j == numbers_in_stack_a[1] - 1)
		return (0);
	return (-1);
}

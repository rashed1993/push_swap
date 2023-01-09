/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeated_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:22:27 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/06 16:34:40 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	repeated_numbers(long *stack_a, int numbers_in_stack_a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < numbers_in_stack_a)
	{
		j = 0;
		while (j < numbers_in_stack_a)
		{
			if ((stack_a[i] == stack_a[j]) && (i != j))
			{
				write(2, "Error\n", 6);
				return (-1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

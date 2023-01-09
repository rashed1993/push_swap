/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   seperate_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:23:15 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/08 11:45:31 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_string(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
}

int	numbers_input(long *stk_a, int *n_stk_a, char **argv, char **num_list)
{
	int	i;
	int	numbers;

	i = 0;
	numbers = 0;
	num_list = ft_split(argv[1], 32);
	while (num_list[i])
	{
		numbers++;
		i++;
	}
	n_stk_a[0] = numbers;
	n_stk_a[1] = n_stk_a[0];
	i = 0;
	while (i < n_stk_a[0])
	{
		stk_a[i] = ft_atoi(num_list[i]);
		i++;
	}
	free_string(num_list);
	free(num_list);
	return (0);
}

int	standard_input(long *stack_a, int *numbers_in_stack_a, char **argv)
{
	int	i;

	i = 0;
	while (i < numbers_in_stack_a[1])
	{
		if (is_only_numbers_in_stacks(argv[i + 1]) == 1)
		{
			stack_a[i] = ft_atoi(argv[i + 1]);
		}	
		else
		{
			write(2, "Error\n", 6);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	seperating_input_numbers(long *stk_a, int *n_stk_a, char **argv)
{
	char	**numbers_list;

	numbers_list = NULL;
	if (n_stk_a[0] == 1)
	{
		if (numbers_input(stk_a, n_stk_a, argv, numbers_list) == -1)
			return (-1);
	}
	else
	{
		if (standard_input(stk_a, n_stk_a, argv) == -1)
			return (-1);
	}
	if (repeated_numbers(stk_a, n_stk_a[1]) == -1)
		return (-1);
	return (0);
}

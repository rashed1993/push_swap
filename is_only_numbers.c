/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_only_numbers.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:17:34 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/08 10:10:38 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_only_numbers_in_stacks(char *numbers)
{
	int	i;
	int	minus;

	i = 0;
	minus = 0;
	while (numbers[i])
	{
		if (numbers[i] == 45)
			minus++;
		else if (ft_isdigit(numbers[i]) == 0)
			return (0);
		i++;
	}
	if (minus > 1)
		return (0);
	return (1);
}

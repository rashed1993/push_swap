/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reallocation.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:21:24 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/04 17:21:52 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reallocation(long *pointer, int startsize, int newsize)
{
	int		i;
	long	*temporary;

	i = 0;
	if ((pointer != NULL) && (startsize < newsize))
	{
		temporary = malloc(sizeof(long) * (newsize));
		while (i < startsize)
		{
			temporary[i] = pointer[i];
			i++;
		}
		pointer = temporary;
	}
	else if ((pointer != NULL) && (startsize > newsize))
	{
		temporary = malloc(sizeof(long) * (newsize));
		while (i < newsize)
		{
			temporary[i] = pointer[i];
			i++;
		}
		pointer = temporary;
	}
}

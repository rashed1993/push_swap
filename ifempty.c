/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ifempty.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:49:07 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/08 11:43:48 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ifempty(int argc, char **argv)
{
	int	x;

	x = -1;
	(void)argc;
	while (argv[++x])
	{
		if (argv[x][0] == '\0')
		{
			printf("Error\n");
			exit (0);
		}
	}
}

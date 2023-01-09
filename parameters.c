/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parameters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:20:46 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/08 11:01:06 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parameters(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b)
{
	push_stack_a(stk_a, stk_b, n_stk_a, n_stk_b);
	rotate_stack_a(stk_a, n_stk_a);
}

void	check_parameterss(char **argv, int *n_stk_a,
	int *n_stk_b, t_check_parameters_counters *t)
{
	while (t->j < ft_strlen(argv[t->i]))
	{
		if (((argv[t->i][t->j] < 48) || (argv[t->i][t->j] > 57))
		&& (argv[t->i][t->j] != 32))
		{
			if (argv[t->i][t->j] != 45)
				free_and_exit_without_errors(n_stk_a, n_stk_b);
		}
		if ((argv[t->i][t->j] == 32) && (argv[t->i][t->j + 1] == 32))
			free_and_exit_without_errors(n_stk_a, n_stk_b);
		t->j++;
	}
	t->i++;
}

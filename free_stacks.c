/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:16:05 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/04 17:50:13 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stacks(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b)
{
	free(stk_a);
	free(stk_b);
	free(n_stk_a);
	free(n_stk_b);
	exit(0);
}

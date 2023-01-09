/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:10:42 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/08 11:01:13 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_and_exit(int *numbers_in_stack_a, int *numbers_in_stack_b)
{
	free(numbers_in_stack_a);
	free(numbers_in_stack_b);
	exit(0);
}

void	free_and_exit_without_errors(int *n_stk_a, int *n_stk_b)
{
	free(n_stk_a);
	free(n_stk_b);
	write(2, "Error\n", 6);
	exit(0);
}

void	check_parameters(int argc, char **argv, int *n_stk_a, int *n_stk_b)
{
	t_check_parameters_counters	t;

	t.i = 1;
	t.j = 0;
	ifempty(argc, argv);
	if ((argc < 2))
		free_and_exit(n_stk_a, n_stk_b);
	while (t.i < argc)
	{
		if ((argv[t.i][ft_strlen(argv[t.i]) - 1] == ' ')
		|| (argv[t.i][0] == ' '))
			free_and_exit_without_errors(n_stk_a, n_stk_b);
		t.j = 0;
		check_parameterss(argv, n_stk_a, n_stk_b, &t);
	}
}

void	set_numbers(int *numbers_in_stack_a, int *numbers_in_stack_b, int argc)
{
	numbers_in_stack_a[0] = argc - 1;
	numbers_in_stack_a[1] = numbers_in_stack_a[0];
	*numbers_in_stack_b = 0;
}

int	main(int argc, char **argv)
{
	long	*stack_a;
	long	*stack_b;
	int		*numbers_in_stack_a;
	int		*numbers_in_stack_b;

	numbers_in_stack_a = (int *)malloc(2 * sizeof(int));
	numbers_in_stack_b = (int *)malloc(sizeof(int));
	check_parameters(argc, argv, numbers_in_stack_a, numbers_in_stack_b);
	set_numbers(numbers_in_stack_a, numbers_in_stack_b, argc);
	stack_a = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	stack_b = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	if ((seperating_input_numbers(stack_a, numbers_in_stack_a, argv) == -1)
		|| (is_stack_sorted(stack_a, numbers_in_stack_a) == 0))
		free_stacks(stack_a, stack_b, numbers_in_stack_a, numbers_in_stack_b);
	if ((numbers_in_stack_a[1] == 2) && (stack_a[0] > stack_a[1]))
		rotate_stack_a(stack_a, numbers_in_stack_a);
	else if (numbers_in_stack_a[1] == 3)
		sort_3_nums(stack_a, numbers_in_stack_a);
	else if (numbers_in_stack_a[1] == 5)
		sort_5_nums(stack_a, stack_b, numbers_in_stack_a, numbers_in_stack_b);
	else
		sort_beyon_3_5(stack_a, stack_b, numbers_in_stack_a,
			numbers_in_stack_b);
	free_stacks(stack_a, stack_b, numbers_in_stack_a, numbers_in_stack_b);
	return (0);
}

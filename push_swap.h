/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ral-dhah < ral-dhah@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:24:01 by ral-dhah          #+#    #+#             */
/*   Updated: 2022/12/11 13:58:44 by ral-dhah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <errno.h>
# include <string.h>

typedef struct t_check_parameters_counters
{
	int	i;
	int	j;		
}	t_check_parameters_counters;
//pa (push to stack a) and pb (push to stack b)

void	push_stack_a(long *stk_a, long *stk_b, int *num_stk_a, int *num_stk_b);
void	push_stack_b(long *stk_a, long *stk_b, int *num_stk_a, int *num_stk_b);

//sa (swap stack a), sb (swap stack b), sab (swap stack a and stack b same time)

void	swap_stack_a(long *stack_a, int *numbers_in_a);
void	swap_stack_b(long *stack_b, int *numbers_in_b);
void	swap_both_stacks(long *stk_a, long *stk_b, int *n_in_a, int *n_in_b);

//ra (rotate stack a), rb (rotate stack b) and rr (rotate both stacks same time)

void	rotate_stack_a(long *stack_a, int *numbers_in_stack_a);
void	rotate_stack_b(long *stack_b, int *numbers_in_stack_b);
void	rotate_both_stks(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b);

//rra (reverse rotate stack a), rrb (reverse rotate stack b)
//and rrr (reverse rotate both stacks same time)

void	revers_rotate_stack_a(long *stack_a, int *numbers_in_a);
void	revers_rotate_stack_b(long *stack_b, int *numbers_in_b);
void	rever_rotat_stks(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b);

//libft (libft functions required for this project)

int		ft_strlen(const char *str);
int		ft_isdigit(int i);
int		ft_atoi(const char *str);

char	**ft_split(char const *str, char c);

//satck a and stack b logic

int		repeated_numbers(long *stack_a, int numbers_in_stack_a);
int		is_stack_sorted(long *stack_a, int *numbers_in_stack_a);
int		is_only_numbers_in_stacks(char *numbers);
int		stack_size(int argc, char **argv);
int		numbers_input(long *stk_a, int *n_stk_a, char **argv, char **num_list);
int		standard_input(long *stack_a, int *numbers_in_stack_a, char **argv);
int		seperating_input_numbers(long *stk_a, int *n_stk_a, char **argv);

void	free_string(char **str);
void	free_stacks(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b);
void	ft_reallocation(long *pointer, int startsize, int newsize);
void	parameters(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b);

//sort 3 numbers in stack a

void	sort_3_nums(long *stk_a, int *n_stk_a);

//sort 5 numbers in both stacks a & b and all of the functions in that file

void	sort_5_nums(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b);
void	rotate_stack_a_radix(long *stack_a, int *numbers_in_stack_a);
void	reverse_rotate_stack_a_radix(long *stack_a, int *numbers_in_stack_a);
void	first_stack(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b);
void	second_stack(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b);

//sort beyond 3 and	5 numbers in both stacks 
//a & b and all of the functions in that file

void	sort_beyon_3_5(long *stk_a, long *stk_b, int *n_stk_a, int *n_stk_b);
void	sort_a_section_of_the_stack(long *array, int *stack_size);
void	swp_stk_a_1st_tim(long *cpy, long *cpy_swp_stk_a,
			long *stk_a, int *n_stk_a);
void	swp_stk_a_2nd_time(long *cpy, long *cpy_swp_stk_a,
			long *stk_a, int *n_stk_a);
void	swp_stk_a_3rd_time(long *stk_a, long *stk_b,
			int *n_stk_a, int *n_stk_b);

//int main functions required to run the push_swap

void	ifempty(int argc, char **argv);
void	free_and_exit(int *numbers_in_stack_a, int *numbers_in_stack_b);
void	free_and_exit_without_errors(int *n_stk_a, int *n_stk_b);
void	check_parameters(int argc, char **argv, int *n_stk_a, int *n_stk_b);
void	check_parameterss(char **argv, int *n_stk_a,
			int *n_stk_b, t_check_parameters_counters *t);
void	set_numbers(int *numbers_in_stack_a, int *numbers_in_stack_b, int argc);

int		main(int argc, char **argv);

#endif
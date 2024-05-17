/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:16:50 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/17 03:45:15 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	checker_1(char *str, t_stack **stack_a, t_stack **stack_b)
{
	if (ft_strcmp(str, "pa\n") == 0)
		push(stack_b, stack_a);
	else if (ft_strcmp(str, "pb\n") == 0)
		push(stack_a, stack_b);
	else if (ft_strcmp(str, "sa\n") == 0)
		sa(stack_a);
	else if (ft_strcmp(str, "sb\n") == 0)
		sb(stack_b);
	else if (ft_strcmp(str, "ss\n") == 0)
	{
		sa(stack_a);
		sb(stack_b);
	}
	else if (ft_strcmp(str, "rrb\n") == 0)
		rrb(stack_b);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rrr(stack_a, stack_b);
	else
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}

void	check_again(t_stack **stack_a, t_stack **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while (str != NULL)
	{
		if (ft_strcmp(str, "ra\n") == 0)
			ra(stack_a);
		else if (ft_strcmp(str, "rb\n") == 0)
			rb(stack_b);
		else if (ft_strcmp(str, "rr\n") == 0)
			rr(stack_a, stack_b);
		else if (ft_strcmp(str, "rra\n") == 0)
			rra(stack_a);
		else if (checker_1(str, stack_a, stack_b) == 1)
		{
			free(str);
			exit(0);
		}
		free(str);
		str = get_next_line(0);
	}
}

void	valide_stack(t_stack *stack_a, int *array)
{
	t_stack	*stack_b;

	stack_b = NULL;
	check_again(&stack_a, &stack_b);
	if (stack_a == NULL && stack_b == NULL)
		exit(0);
	if (ft_is_sorted(stack_a, array) == ft_lst_size_b(stack_a)
		&& stack_a != NULL && stack_b == NULL)
	{
		write(1, "OK\n", 3);
		free(array);
		ft_free_list_b(stack_a);
		exit(0);
	}
	else
	{
		write(1, "KO\n", 3);
		free(array);
		ft_free_list_b(stack_a);
		exit(0);
	}
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	int		*array;
	int		len;
	int		i;
	int		j;

	i = 1;
	if (argc <= 1)
		exit(0);
	while (argc > 1 && argv[i])
	{
		len = ft_count_words_b(argv[i], ' ');
		array = ft_cton_b(argv[i], len);
		j = 0;
		while (j < len)
			push_add_back_b(&stack_a, array[j++]);
		i++;
	}
	free(array);
	array = ft_stoa_b(&stack_a);
	ft_sort_array_b(array, ft_lst_size_b(stack_a));
	check_for_errors(array, ft_lst_size_b(stack_a), stack_a);
	valide_stack(stack_a, array);
	free(array);
	ft_free_list_b(stack_a);
}

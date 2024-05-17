/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:16:50 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/16 21:13:20 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*sort_big_stack(t_stack *stack_a, t_stack *stack_b, int *array,
		int size)
{
	ft_push_to_stack_b(&stack_a, &stack_b, array, size);
	ft_push_to_stack_a(&stack_a, &stack_b, array, size);
	return (stack_a);
}

void	run_push_swap(t_stack *stack_a, int *array)
{
	t_stack	*stack_b;
	int		size;

	stack_b = NULL;
	array = stoa(&stack_a);
	size = ft_lst_size(stack_a);
	ft_sort_array(array, size);
	validate_input(array, stack_a, size);
	sort_small_stack(stack_a, stack_b, array, size);
	stack_a = sort_big_stack(stack_a, stack_b, array, size);
	free(array);
	ft_free_list(stack_a);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	int		count_words;
	int		*array;
	int		i;
	int		j;

	i = 1;
	stack_a = NULL;
	if (argc <= 1)
		exit(0);
	while (argv[i])
	{
		count_words = ft_count_words(argv[i], ' ');
		array = ft_cton(argv[i], count_words);
		j = 0;
		while (j < count_words)
			push_add_back(&stack_a, array[j++]);
		i++;
		free(array);
	}
	run_push_swap(stack_a, array);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_stack_b.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 07:05:08 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/15 02:27:54 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_chunk_size(int size_of_stack_a)
{
	int	chunk_size;

	chunk_size = 0;
	if (size_of_stack_a <= 100)
		chunk_size = 20;
	else
		chunk_size = 40;
	return (chunk_size);
}

int	ft_is_in_range(int *array, int start, int end, int nbr)
{
	int	i;

	i = start + 1;
	while (i <= end)
	{
		if (array[i] == nbr)
			return (1);
		else
			i++;
	}
	return (0);
}

void	perfom_operation(t_stack **stack_a, t_stack **stack_b, int *start_index,
		int *end_index)
{
	pb(stack_a, stack_b);
	rb(stack_b);
	*start_index = *start_index + 1;
	*end_index = *end_index + 1;
}

void	ft_push_to_stack_b(t_stack **stack_a, t_stack **stack_b, int *array,
		int size_of_stack_a)
{
	int	start;
	int	end;

	start = 0;
	end = ft_chunk_size(size_of_stack_a);
	while (*stack_a)
	{
		if (end >= size_of_stack_a)
			end = size_of_stack_a - 1;
		if (ft_is_in_range(array, start, end, (*stack_a)->value) == 1)
		{
			pb(stack_a, stack_b);
			start++;
			end++;
		}
		else
		{
			if ((*stack_a)->value <= array[start])
				perfom_operation(stack_a, stack_b, &start, &end);
			else
				ra(stack_a);
		}
	}
}

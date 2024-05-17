/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 01:46:25 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/16 16:52:48 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_free_and_exit(t_stack *stack_a, int *array)
{
	ft_free_list(stack_a);
	free(array);
	exit(0);
}

void	sort_small_stack(t_stack *stack_a, t_stack *stack_b, int *array,
		int size)
{
	if (size == 2)
	{
		sort_two(&stack_a);
		ft_free_and_exit(stack_a, array);
	}
	else if (size == 3)
	{
		sort_three(&stack_a);
		ft_free_and_exit(stack_a, array);
	}
	else if (size == 4)
	{
		sort_four(&stack_a, &stack_b);
		ft_free_and_exit(stack_a, array);
	}
	else if (size == 5)
	{
		sort_five(&stack_a, &stack_b);
		ft_free_and_exit(stack_a, array);
	}
}

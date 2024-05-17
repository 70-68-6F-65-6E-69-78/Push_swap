/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 03:50:37 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/14 23:37:47 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_stack **stack_a)
{
	int	max_value;
	int	min_value;

	max_value = ft_find_max(*stack_a);
	min_value = ft_find_min(*stack_a);
	while (is_sorted2(*stack_a))
	{
		if (max_value == (*stack_a)->value)
			ra(stack_a);
		if (min_value == (*stack_a)->next->value)
			sa(stack_a);
		if (max_value == (*stack_a)->next->value)
			rra(stack_a);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 04:43:25 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/14 23:37:23 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_four(t_stack **stack_a, t_stack **stack_b)
{
	int		min_value;
	t_stack	*temp;

	temp = *stack_a;
	min_value = ft_find_min(*stack_a);
	if (is_sorted2(*stack_a))
	{
		if (temp->value == min_value)
			pb(stack_a, stack_b);
		else
		{
			ft_mstt_4(stack_a, min_value);
			pb(stack_a, stack_b);
		}
		sort_three(stack_a);
		pa(stack_b, stack_a);
	}
}

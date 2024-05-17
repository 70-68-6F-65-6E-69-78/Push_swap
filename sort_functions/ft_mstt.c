/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mstt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 05:29:11 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/14 18:00:28 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_mstt_4(t_stack **stack_a, int min_value)
{
	t_stack	*temp;

	temp = *stack_a;
	if (temp->next->value == min_value)
		sa(stack_a);
	else if (temp->next->next->value == min_value)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (temp->next->next->next->value == min_value)
		rra(stack_a);
}

void	ft_mstt_5(t_stack **stack_a, int min_value)
{
	t_stack	*temp;

	temp = *stack_a;
	if (temp->next->value == min_value)
		sa(stack_a);
	else if (temp->next->next->value == min_value)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (temp->next->next->next->value == min_value)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (temp->next->next->next->next->value == min_value)
		rra(stack_a);
}

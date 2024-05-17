/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 03:41:25 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/17 01:14:44 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void	swap(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (ft_lst_size_b(*stack) < 2)
		return ;
	temp = *stack;
	temp2 = (*stack)->next;
	temp->next = temp2->next;
	temp2->next = temp;
	*stack = temp2;
}

void	sa(t_stack **stack_a)
{
	swap(stack_a);
}

void	sb(t_stack **stack_b)
{
	swap(stack_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

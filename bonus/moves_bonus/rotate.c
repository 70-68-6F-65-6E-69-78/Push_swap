/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 03:42:04 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/17 00:34:47 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void	rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*second;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	last = *stack;
	second = (*stack)->next;
	while (last->next != NULL)
		last = last->next;
	last->next = *stack;
	*stack = second;
	last->next->next = NULL;
}

void	ra(t_stack **stack_a)
{
	rotate(stack_a);
}

void	rb(t_stack **stack_b)
{
	rotate(stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

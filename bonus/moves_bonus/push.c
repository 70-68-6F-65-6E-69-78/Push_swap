/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 03:41:03 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/17 00:33:48 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void	push(t_stack **from_stack, t_stack **to_stack)
{
	t_stack	*temp;

	if (*from_stack == NULL)
		return ;
	temp = *from_stack;
	*from_stack = (*from_stack)->next;
	temp->next = *to_stack;
	*to_stack = temp;
}

void	pa(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
}

void	pb(t_stack **satck_a, t_stack **stack_b)
{
	push(satck_a, stack_b);
}

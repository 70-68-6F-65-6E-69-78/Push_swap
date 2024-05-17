/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_stack_a.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 18:04:29 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/15 02:34:03 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_position_node(t_stack *stack_b, int max)
{
	t_stack	*temp;
	int		count;

	temp = stack_b;
	count = 1;
	while (temp != NULL)
	{
		if (temp->value == max)
			return (count);
		count++;
		temp = temp->next;
	}
	return (0);
}

void	ft_rb_edit(t_stack **stack_b, int position)
{
	if (position < 0)
		return ;
	while (position)
	{
		rb(stack_b);
		position--;
	}
}

void	ft_rrb_edit(t_stack **stack_b, int position)
{
	if (position < 0)
		return ;
	while (position)
	{
		rrb(stack_b);
		position--;
	}
}

void	ft_push_to_stack_a(t_stack **stack_a, t_stack **stack_b, int *array,
		int size)
{
	int	position;

	while (*stack_b)
	{
		position = ft_position_node(*stack_b, array[size - 1]);
		if (position <= size / 2)
			ft_rb_edit(stack_b, position - 1);
		else
			ft_rrb_edit(stack_b, size - position + 1);
		pa(stack_b, stack_a);
		size--;
	}
}

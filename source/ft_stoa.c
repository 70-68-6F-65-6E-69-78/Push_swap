/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 00:39:28 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/16 21:17:03 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*stoa(t_stack **stack_head)
{
	int		size;
	int		*array;
	int		i;
	t_stack	*stack;

	size = ft_lst_size(*stack_head);
	array = malloc(sizeof(int) * size);
	if (!array)
		return (0);
	i = 0;
	stack = *stack_head;
	while (stack)
	{
		array[i] = stack->value;
		stack = stack->next;
		i++;
	}
	return (array);
}

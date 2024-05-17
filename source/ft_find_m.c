/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_m.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 04:18:58 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/14 18:02:26 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_find_min(t_stack *stack)
{
	t_stack	*temp;
	int		min_value;

	min_value = stack->value;
	if (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (min_value > temp->value)
				min_value = temp->value;
			temp = temp->next;
		}
	}
	return (min_value);
}

int	ft_find_max(t_stack *stack)
{
	int		max_value;
	t_stack	*temp;

	max_value = stack->value;
	if (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (max_value < temp->value)
				max_value = temp->value;
			temp = temp->next;
		}
	}
	return (max_value);
}

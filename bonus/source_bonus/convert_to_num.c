/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_to_num.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 00:39:28 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/17 03:36:23 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

int	*ft_stoa_b(t_stack **stack_head)
{
	int		size;
	int		*array;
	int		i;
	t_stack	*stack;

	size = ft_lst_size_b(*stack_head);
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

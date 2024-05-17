/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 05:39:53 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/14 05:40:12 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_lst_size(t_stack *head)
{
	t_stack	*stack;
	int		size;

	stack = head;
	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}

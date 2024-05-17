/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 05:39:53 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/17 00:49:55 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

int	ft_lst_size_b(t_stack *head)
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

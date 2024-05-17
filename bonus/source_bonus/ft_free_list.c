/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 01:37:31 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/17 00:50:05 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void	ft_free_list_b(t_stack *head)
{
	t_stack	*temp;

	if (head == NULL)
	{
		return ;
	}
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

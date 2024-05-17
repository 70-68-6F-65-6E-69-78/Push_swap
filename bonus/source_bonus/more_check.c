/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 01:40:54 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/17 03:44:53 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

int	check_double(int *array, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] == array[j + 1])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_is_sorted(t_stack *stack_a, int *arr)
{
	int		i;
	int		c;
	t_stack	*t;

	i = 0;
	c = 0;
	t = stack_a;
	while (t)
	{
		if (t->value == arr[i])
			c++;
		i++;
		t = t->next;
	}
	return (c);
}

void	check_for_errors(int *array, int size, t_stack *stack_a)
{
	if (check_double(array, size) == 1)
	{
		write(2, "Error\n", 6);
		free(array);
		ft_free_list_b(stack_a);
		exit(0);
	}
	else if (ft_is_sorted(stack_a, array) == size)
	{
		free(array);
		ft_free_list_b(stack_a);
		exit(0);
	}
	else
		return ;
}

void	free_and_exit(t_stack *stack_a, int *arr)
{
	ft_free_list_b(stack_a);
	free(arr);
	exit(0);
}

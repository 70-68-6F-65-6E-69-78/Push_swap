/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 01:40:44 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/14 03:45:03 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_duplicates(int *array, int size)
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
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_sorted(int *array, t_stack *stack_a)
{
	int		i;
	int		count;
	t_stack	*temp;

	i = 0;
	count = 0;
	temp = stack_a;
	while (temp)
	{
		if (temp->value == array[i])
			count++;
		i++;
		temp = temp->next;
	}
	return (count);
}

void	validate_input(int *array, t_stack *stack_a, int size)
{
	if (check_duplicates(array, size) == 1)
	{
		write(1, "Error\n", 6);
		free(array);
		ft_free_list(stack_a);
		exit(0);
	}
	else if (is_sorted(array, stack_a) == size)
	{
		free(array);
		ft_free_list(stack_a);
		exit(0);
	}
	else
		return ;
}

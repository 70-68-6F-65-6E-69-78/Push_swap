/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cton.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 23:17:02 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/17 00:51:11 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

void	handle_error_b(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	handle_sign_b(char *str, int *i)
{
	int	sign;

	sign = 1;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign = -1;
		(*i)++;
	}
	return (sign);
}

long	handle_numbers_b(char *str, int *i, int sign)
{
	long	res;
	int		is_ok;

	res = 0;
	is_ok = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		is_ok = 1;
		res = res * 10 + (str[*i] - '0');
		if ((sign == 1 && res > INT_MAX) || (sign == -1
				&& (unsigned long)res > (unsigned long)INT_MAX + 1))
			handle_error_b();
		(*i)++;
	}
	if (is_ok == 0 || str[*i] != '\0')
		handle_error_b();
	return (res);
}

int	ft_atoi_b(char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = handle_sign_b(str, &i);
	res = handle_numbers_b(str, &i, sign);
	return (sign * res);
}

int	*ft_cton_b(char *str, int len)
{
	int		i;
	int		*array;
	char	**token;

	token = ft_split_b(str, ' ');
	array = malloc(sizeof(int) * (len));
	if (!array)
		free(array);
	i = 0;
	while (token[i])
	{
		array[i] = ft_atoi_b(token[i]);
		i++;
	}
	i = 0;
	while (token[i])
		free(token[i++]);
	free(token);
	return (array);
}

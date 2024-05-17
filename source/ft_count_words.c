/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 00:33:28 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/14 00:36:11 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_count_words(char *str, char del)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == del)
			i++;
		if (str[i] && str[i] != del)
			count++;
		while (str[i] && str[i] != del)
			i++;
	}
	if (count == 0)
	{
		write(2, "Error\n", 6);
		exit(0);
	}
	return (count);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*ptr;
	int		i;
	int		str_len;

	i = 0;
	str_len = ft_strlen(str);
	ptr = malloc(sizeof(char) * (str_len + 1));
	if (!ptr)
		return (NULL);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_substr(char const *str, int start, int len)
{
	int		i;
	char	*sub_string;
	int		str_len;

	i = 0;
	str_len = ft_strlen(str);
	if (str == NULL)
		return (NULL);
	if (len > str_len - start)
		len = str_len - start;
	if (str_len <= start)
		return (ft_strdup(""));
	sub_string = (char *)malloc(sizeof(char) * (str_len + 1));
	if (!sub_string)
		return (NULL);
	while (i < len)
	{
		sub_string[i] = str[start];
		i++;
		start++;
	}
	sub_string[len] = '\0';
	return (sub_string);
}

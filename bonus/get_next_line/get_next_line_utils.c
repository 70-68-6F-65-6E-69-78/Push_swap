/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adbourji <adbourji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 21:35:04 by adbourji          #+#    #+#             */
/*   Updated: 2024/05/17 01:17:07 by adbourji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap_bonus.h"

char	*ft_strjoin(char	*remainder1, char *buffer1)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!remainder1)
		return (ft_strdup_b(buffer1));
	res = malloc(ft_strlen_b(remainder1) + ft_strlen_b(buffer1) + 1);
	if (!res)
		return (NULL);
	while (remainder1[i])
	{
		res[i] = remainder1[i];
		i++;
	}
	while (buffer1[j])
		res[i++] = buffer1[j++];
	res[i] = '\0';
	free(remainder1);
	return (res);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	if ((char)c == 0)
		return (str + i);
	return (NULL);
}

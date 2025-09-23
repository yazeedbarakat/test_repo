/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarakat <ybarakat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 08:42:34 by ybarakat          #+#    #+#             */
/*   Updated: 2025/09/22 16:53:34 by ybarakat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	fs(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	while (strs[i])
	{
		while (strs[i][j])
			j++;
		i++;
	}
	while (sep[c])
		c++;
	c = c * (size - 1);
	return (j + c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	x;
	int	c;
	int	*arr;

	arr = (char *)malloc(fs(size, strs, sep) + 1);
	if (size == 0)
	{
		arr = (char *)malloc(1);
		arr = '\0';
		return (arr);
	}
	i = 0;
	j = 0;
	while (strs[i])
	{
		while (strs[i][j])
			arr[j] = strs[j++];
		c = j;
		x = 0;
		while (sep[x])
			arr[c++] = sep[x++];
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarakat <ybarakat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 16:02:23 by ybarakat          #+#    #+#             */
/*   Updated: 2025/09/22 16:56:53 by ybarakat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	*arr;
	int	i;
	int	j;

	i = 0;
	while (src[i])
		i++;
	arr = (char *)malloc(i + 1);
	j = 0;
	while (src[j])
	{
		arr[j] = src[j];
		j++;
	}
	arr[j] = 0;
	return (arr);
}

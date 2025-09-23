/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarakat <ybarakat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 08:40:18 by ybarakat          #+#    #+#             */
/*   Updated: 2025/09/22 08:47:29 by ybarakat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	s;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	s = max - min;
	arr = (int *)malloc(sizeof(int) * s);
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (s);
}

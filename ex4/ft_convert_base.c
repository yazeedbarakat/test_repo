/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarakat <ybarakat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:23:57 by ybarakat          #+#    #+#             */
/*   Updated: 2025/09/23 16:22:29 by ybarakat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	power(int s, int b)
{
	int	i;

	i = 1;
	if(s > 0)
		i = i * b * power(--s,b);
	return (i);
}
	

int	char_int(char n)
{
	int	x;

	x = n - '0';
	return (x);
}

int	get_num(char *nbr)
{
	int	*num;
	int	i;
	int	s;
	int	a;

	s = 0;
	while(nbr[s])
		s++;
	num = (int *)malloc(sizeof(int) * s);
	i = 0;
	while(nbr[i])
	{
		num[i] = char_int(nbr[i]);
		i++;
	}
	i = 0;
	a = 0;
	while(i < s)
	{
		a = a + num[i] * power(i, 10);
		i++;
	}
	return (a);
}

int	get_dec(int base, int nbr)
{
	int	dec;
	int	j;

	dec = 0;
	j = 0;
	if (base != 10)
	{
		while(nbr != 0)
		{
			dec = dec + (nbr % 10) * power(j, base);
			nbr = nbr / 10;
			j++;
		}
	}
	return (dec);
}
int	get_len(char *base)
{
	int	i;
	
	i = 0;
	while (base[i])
		i++;
	return	(i);
}

int	new_base(int b2,int n)
{
	int	x;

	x = 0;
	while(n != 0)
	{
		x = x + n % b2;
		x = x * 10;
		n = n / 10;
	}
	x = x / 10;
	return (x);
}

int	ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	n;
	int	b1;
	int	b2;
	int	result;

	n = get_num(nbr);
	b1 = get_len(base_from);
	n = get_dec(b1, n);
	b2 = get_len(base_to);
	result = new_base(b2, n);
	return (result);
}
int	main()
{
	int	r;
	char	*a = "21";
	char	*b = "01234567";
	char	*c = "012345678";

	r = ft_convert_base(a, b, c);
	printf("%d",r);
}

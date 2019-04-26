/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 10:07:28 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/26 10:44:57 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_del(int count)
{
	int d;

	d = 1;
	while (count > 1)
	{
		d = d * 10;
		count--;
	}
	return (d);
}

static char	*ft_filling(char *s, int n, int count)
{
	int i;
	int del;
	char smbl;

	i = 0;
	if (n < 0)
	{
		s[i] = '-';
		i++;
		count--;
		n *= -1;
	}
	while (count > 0)
	{
		del = ft_del(count);
		smbl = n / del;
		s[i] = smbl + 48;
		n = n % del;
		count--;
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_itoa(int n)
{
	int count;
	int tmp;
	char *s;

	count = 0;
	tmp = n;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		count++;
	}
	count = (n <= 0) ? (count + 1) : count;
	if (!(s = malloc((sizeof(char)) * (count + 1))))
		return (NULL);
	else
	return (ft_filling(s, n, count));
}

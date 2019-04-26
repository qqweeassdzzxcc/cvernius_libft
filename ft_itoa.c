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

	d = 0;
	while (count)
	{
		d = d * 10;
	}
}

static char	*ft_filling(char *s, int n, int count)
{
	int i;

	i = 0;
	if (n < 0)
	{
		s[i] = '-';
		i++;
	}

}

char	*ft_itoa(int n)
{
	int count;
	char *s;

	count = 0;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	if (!(s = malloc((sizeof(char)) * (count + 1))))
		return (NULL);
	else
	return (ft_filling(char *s, int n, int count));
}

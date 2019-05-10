/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 20:57:24 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/10 15:25:44 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_count_digit(int tmp)
{
	size_t	count;

	count = 0;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		count++;
	}
	return (count);
}

char			*ft_itoa(int n)
{
	size_t		count;
	size_t		i;
	char		*s;

	count = 0;
	n = (n < INT_MIN) ? INT_MIN : n;
	n = (n > INT_MAX) ? INT_MAX : n;
	count = ft_count_digit(n);
	count = (n <= 0) ? (count + 1) : count;
	if (!(s = malloc((sizeof(char)) * (count + 1))))
		return (NULL);
	s[count] = '\0';
	count--;
	s[0] = (n < 0) ? '-' : ' ';
	i = (n < 0) ? count : count + 1;
	while (i)
	{
		s[count] = (n < 0) ? ((n % 10) * (-1) + '0') : (n % 10 + '0');
		n = n / 10;
		count--;
		i--;
	}
	return (s);
}

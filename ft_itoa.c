/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 20:57:24 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/09 22:52:21 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char			*ft_itoa(int n)
{
	size_t		count;
	int			tmp;
	char		*s;

	count = 0;
	n = (n < INT_MIN) ? INT_MIN : n;
	n = (n > INT_MAX) ? INT_MAX : n;
	tmp = n;
	//printf("n = %d\n", n);
	while (tmp != 0)
	{
		tmp = tmp / 10;
		count++;
	}
	printf("q count = %zu\n", count);
	count = (n <= 0 || (n < 10 && n >= 0)) ? (count + 1) : count;
	if (!(s = malloc((sizeof(char)) * (count + 1))))
		return (NULL);
	printf("t count = %zu\n", count);
	s[count] = '\0';
	count--;
	//printf(" jcount = %zu\n", count);
	s[0] = (n < 0) ? '-' : ' ';
	while (count)
	{
		s[count] = (n < 0) ? ((n % 10) * (-1) + '0') : (n % 10 + '0');
		printf("s = %c\n", s[count]);
		n = n / 10;
		count--;
	}
	printf("s = %s\n", s);
	return (s);
}


int		main(void)
{
	char *s;

	s = ft_itoa(0);
	return (0);
}

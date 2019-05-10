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
	size_t		i;
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
	printf("1 count = %zu\n", count);
	count = (n <= 0 || (n >= 0 && n <= 9)) ? (count + 1) : count;
	if (!(s = malloc((sizeof(char)) * (count + 1))))
		return (NULL);
	printf("2 count = %zu\n", count);
	s[count] = '\0';
	count--;
	//s[count] = (count == 0) ? n : ' ';
	//printf("3 count = %zu s[count] = %s\n", count, s);
	s[0] = (n < 0) ? '-' : ' ';
	printf("n = %d, s[0] = %c\n", n, s[0]);
	i = (n < 0) ? count : count + 1;
	while (i)
	{
		s[count] = (n < 0) ? ((n % 10) * (-1) + '0') : (n % 10 + '0');
		printf("s = %c, count = %ld\n", s[count], count);
		n = n / 10;
		count--;
		i--;
	}
	printf("s = %s\n", s);
	return (s);
}

int		main(void)
{
	char *s;

	s = ft_itoa(10000);
	return (0);
}

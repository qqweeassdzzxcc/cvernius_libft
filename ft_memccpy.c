/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:23:36 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/11 17:43:39 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

#define		STRING_1	"the cake is a lie !\0I'm hidden lol\r\n"
#define		STRING_4	"phrase differente pour le test"
#define		STRING_2	"there is no stars in the sky"
#define		STRING_3	"test basic !"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;
	size_t			i;

	i = 0;
	from = (unsigned char*)src;
	to = (unsigned char*)dst;
	while (n-- > 0)
	{
		to[i] = from[i];
		if (from[i] == (unsigned char)c)
		{
			to[i] = from[i];
			return ((void *)to + i + 1);
		}
		i++;
	}
	return (NULL);
}

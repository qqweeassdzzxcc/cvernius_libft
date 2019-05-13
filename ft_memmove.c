/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:13:18 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/13 19:23:24 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	i = 0;
	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	if (dst > src)
	{
		i = len;
		while (i)
		{
			to[i - 1] = from[i - 1];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			to[i] = from[i];
			i++;
		}
	}
	return ((void*)to);
}

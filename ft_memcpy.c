/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:49:27 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/24 10:15:15 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(const void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*from;
	unsigned char	*to;

	i = 0;
	to = (unsigned char*)dst;
	from = (unsigned char*)src;
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return ((void *)dst);
}

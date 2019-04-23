/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 19:49:27 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/15 19:28:33 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	*ft_memcpy(const void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*from;
	unsigned char	*to;

	i = 0;
	to = (unsigned char*)dst;
	from = (unsigned char*)src;
	while (from[i] != '\0' && to[i] != '\0' && i != n)
	{
		to[i] = from[i];
		i++;
	}
	return ((void *)dst);
}

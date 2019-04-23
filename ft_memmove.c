/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:13:18 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/15 19:28:37 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	i = 0;
	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	while (from[i] != '\0' && to[i] != '\0' && i < len)
	{
		to[i] = from[i];
		i++;
	}
	return ((void*)to);
}

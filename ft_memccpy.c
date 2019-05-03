/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 21:23:36 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/03 14:13:38 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*from;
	unsigned char	*to;
	size_t			i;

	i = 0;
	from = (unsigned char*)src;
	to = (unsigned char*)dst;
	while (i < n && from[i - 1] != (unsigned char)c)
	{
		to[i] = from[i];
		i++;
	}
	if (from[i - 1] != (unsigned char)c)
		return (NULL);
	else
		return ((void *)&to[i]);
}

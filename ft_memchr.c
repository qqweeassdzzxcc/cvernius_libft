/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:32:35 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/24 10:18:33 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	sym;
	size_t			i;

	i = 0;
	sym = (unsigned char)c;
	str = (unsigned char *)s;
	while (i < n && str[i] != sym)
		i++;
	if (str[i] != sym)
		return (NULL);
	else
		return (&str[i]);
}

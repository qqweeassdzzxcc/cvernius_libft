/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 23:16:46 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/15 19:28:41 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	str = b;
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

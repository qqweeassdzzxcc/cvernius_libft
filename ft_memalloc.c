/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 19:52:58 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/23 20:34:33 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	*ft_memalloc(size_t size)
{
	void	*p;
	int		i;

	i = 0;
	if (!(p = malloc(size)))
		return (NULL);
	else
	{
		ft_bzero(p, size);
		return (p);
	}
}

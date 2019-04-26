/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 21:10:09 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/24 10:45:17 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i] &&
			(unsigned char)s1[i] != '\0' && (unsigned char)s2[i] != '\0'
																&& i < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

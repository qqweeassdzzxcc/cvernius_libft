/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:54:25 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/23 20:57:14 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = malloc(f(i, s[i]));
		i++;
	}
	s[i] = malloc(f(i, s[i]));
	return (s);
}

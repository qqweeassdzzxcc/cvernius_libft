/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:53:49 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/23 20:57:27 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = f(&s[i]);
		i++;
	}
}

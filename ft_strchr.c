/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:46:49 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/15 19:32:46 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strchr(const char *s, int c)
{
	char	sym;
	char	*str;
	int		i;

	sym = (char)c;
	str = (char *)s;
	i = 0;
	while (str[i] != '\0' && str[i] != sym)
		i++;
	if (str[i] == sym || sym == '\0')
		return (&str[i]);
	else
		return (NULL);
}

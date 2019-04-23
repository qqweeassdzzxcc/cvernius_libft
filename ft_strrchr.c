/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 23:01:03 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/15 19:35:07 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	sym;
	char	*str;

	str = (char *)s;
	sym = (char)c;
	i = ft_strlen(s);
	while (i >= 0 && str[i] != sym)
		i--;
	if (sym == '\0')
		return (&str[ft_strlen(s)]);
	if (sym == str[i])
		return (&str[i]);
	else
		return (NULL);
}

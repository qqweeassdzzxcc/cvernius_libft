/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 23:01:03 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/26 10:52:51 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_srchr(const char *s, int c)
{
	int		i;
	char	sym;

	sym = (char)c;
	i = ft_strlen(s);
	if (sym == '\0')
		return ((char *)&s[i]);
	while (i >= 0 && s[i] != sym)
		i--;
	if (sym == s[i])
		return ((char *)&s[i]);
	else
		return (NULL);
}

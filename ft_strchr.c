/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:46:49 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/26 10:52:39 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	sym;
	int		i;

	sym = (char)c;
	i = 0;
	while (s[i] != '\0' && s[i] != sym)
		i++;
	if (s[i] == sym)
		return ((char *)&s[i]);
	else
		return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 20:58:22 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/16 20:20:28 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

char	*ft_strdup(const char *s1)
{
	char	*str1;
	char	*str2;
	int		i;

	i = 0;
	str1 = (char *)s1;
	if ((str2 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
	{
		while (str1[i] != '\0')
		{
			str2[i] = str1[i];
			i++;
		}
		str2[i] = '\0';
		return (str2);
	}
	else
		return (NULL);
}

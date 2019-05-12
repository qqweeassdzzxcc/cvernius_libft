/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:56:02 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/12 19:49:52 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*s;

	j = 0;
	i = 0;
	if (s1 && s2)
	{
		if ((s = malloc((sizeof(char)) * (ft_strlen(s1) + ft_strlen(s2)))))
		{
			s = ft_strcpy(s, s1);
			s = ft_strcpy(s + ft_strlen(s1), s2);
		}
		/*
		while (s1[i] != '\0')
		{
			s[j] = s1[i];
			i++;
			j++;
		}
		i = 0;
		while (s2[i] != '\0')
		{
			s[j] = s2[i];
			i++;
			j++;
		}
		s[j] = '\0';
		*/
		return (s);
	}
	return (NULL);
}

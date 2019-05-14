/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:56:02 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/14 20:02:07 by cvernius         ###   ########.fr       */
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
	s = NULL;
	if (s1 && s2)
	{
		if ((s = malloc((sizeof(char)) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		{
			s = ft_strcpy(ft_strncpy(s, s1, ft_strlen(s1)) + ft_strlen(s1), s2);
			return (s - ft_strlen(s1));
		}
	}
	return (NULL);
}

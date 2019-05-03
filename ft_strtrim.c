/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:56:32 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/03 14:49:49 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	k = 0;
	j = ft_strlen((char*)s);
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (s[j] >= 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		j--;
	if (!(str = malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	else
	{
		while (i <= j)
		{
			str[k] = s[i];
			k++;
			i++;
		}
		str[k] = '\0';
		return (str);
	}
}

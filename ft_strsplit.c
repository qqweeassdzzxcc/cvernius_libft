/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 21:37:21 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/08 22:53:52 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}

static int		ft_csym(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	return (i);
}

static void		ft_str_del(char **str, size_t j)
{
	while (str)
	{
		free(str[j]);
		j--;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = ft_count_words(s, c);
	if (!(str = malloc((sizeof(char *) * (count + 1)))))
		return (NULL);
	while (j < count)
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] == c)
		{
			if (!(str[j] = ft_strndup((char*)&s[i], ft_csym((char*)&s[i], c))))
			{
				ft_str_del(str, j);
				return (NULL);
			}
			j++;
			i += ft_csym((char*)s, c);
		}
	}
	str[j][0] = '\0';
	return (str);
}

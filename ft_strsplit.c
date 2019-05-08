/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 21:37:21 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/08 22:36:32 by cvernius         ###   ########.fr       */
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

static int		ft_count_sym(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	return (i);
}

static void		ft_strdel(char **str, size_t j)
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

	count = ft_count_words(s, c);
	if (!(str = malloc((sizeof(char *) * (count + 1)))))
		return (NULL);
	while (j < count)
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] == c)
		{
			if (!(str[j] = ft_strndup(&s[i], ft_count_sym(&s[i], c))))
			{
				ft_strdel(str, j);
				return (NULL);
			}
			j++;
			i += ft_count_sym(s, c);
		}
	}
	str[j][0] = '\0';
	return (str);
}

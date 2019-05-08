/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:27:27 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/08 19:40:06 by cvernius         ###   ########.fr       */
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

static size_t	ft_count_sym(char const *s, char c, int k)
{
	while (s[k] != c && s[k] != '\0')
		k++;
	return (k);
}

static char		**ft_allocate_mem(char const *s, char c, char **str,
														size_t count)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	while (s[k] != '\0' || i < count)
	{
		while (s[k] == c && s[k] != '\0')
			k++;
		if (s[k] != c && s[k] != '\0')
		{
			if (!(str[i] = malloc(sizeof(char) *
									(ft_count_sym(s, c, k) - k + 1))))
				return (NULL);
			else
				i++;
			k = ft_count_sym(s, c, k);
		}
	}
	str[i] = malloc(sizeof(char) * 1);
	return (str);
}

static char		**ft_get_str(char const *s, char c, char **str, size_t count)
{
	size_t i;
	size_t j;
	size_t k;

	k = 0;
	i = 0;
	while (s[k] != '\0' || i < count)
	{
		while (s[k] == c && s[k] != '\0')
			k++;
		if (s[k] != c && s[k] != '\0')
		{
			j = 0;
			while (k != ft_count_sym(s, c, k))
			{
				str[i][j] = s[k];
				k++;
				j++;
			}
			str[i][j] = '\0';
			i++;
		}
	}
	str[i][0] = '\0';
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	count;

	count = ft_count_words(s, c);
	if (!(str = malloc((sizeof(char*) * (count + 1)))))
		return (NULL);
	else
	{
		if ((str = ft_allocate_mem(s, c, str, count)) == NULL)
			return (NULL);
		else
		{
			str = ft_get_str(s, c, str, count);
		}
	}
	return (str);
}

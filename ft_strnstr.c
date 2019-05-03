/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 19:16:59 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/03 14:24:56 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_start_on_i(char *hstack, const char *needle, size_t i,
							size_t len)
{
	while (hstack[i] != needle[0] && hstack[i] != '\0' && i < len)
		i++;
	return (i);
}

static int		ft_check_n_h(char *hstack, const char *needle, size_t i, int j)
{
	if (hstack[i] == needle[j] && hstack[i] != '\0' && needle[j] != '\0')
		return (1);
	else
		return (0);
}

static char		*ft_n_return(char *hstack, size_t i, int flag)
{
	if (flag == 0)
		return (NULL);
	else
		return (&hstack[i]);
}

char			*ft_strnstr(const char *haystack, const char *needle,
							size_t len)
{
	size_t	i;
	size_t	i_tmp;
	size_t	j;
	int		flag;
	char	*hstack;

	hstack = (char *)haystack;
	if (needle[0] == '\0')
		return (hstack);
	i = 0;
	while (hstack[i] != '\0' && flag != 1 && i < len)
	{
		i_tmp = ft_start_on_i(hstack, needle, i, len);
		j = 0;
		while ((ft_check_n_h(hstack, needle, i_tmp, j)) == 1 && i_tmp < len)
		{
			i_tmp++;
			j++;
		}
		flag = (needle[j] == '\0') ? 1 : 0;
		i = (flag == 0) ? (i + 1) : i;
	}
	return (ft_n_return(hstack, ft_start_on_i(hstack, needle, i, len), flag));
}

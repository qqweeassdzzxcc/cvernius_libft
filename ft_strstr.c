/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 16:33:20 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/03 14:25:38 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_return(int flag, char *hstack, int i)
{
	if (flag == 0)
		return (NULL);
	else
		return (&hstack[i]);
}

static int		ft_check_n_in_h(char *hstack, const char *needle, int i, int j)
{
	if ((hstack[i] == needle[j] && needle[j] != '\0' && hstack[i] != '\0'))
		return (1);
	else
		return (0);
}

static int		ft_start_i(char *hstack, const char *needle, int i)
{
	while (hstack[i] != needle[0] && hstack[i] != '\0')
		i++;
	return (i);
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	i_tmp;
	size_t	j;
	int		flag;
	char	*hstack;

	i = 0;
	flag = 0;
	hstack = (char *)haystack;
	if (needle[0] == '\0')
		return (hstack);
	while (hstack[i] != '\0' && flag == 0)
	{
		i_tmp = ft_start_i(hstack, needle, i);
		j = 0;
		while (ft_check_n_in_h(hstack, needle, i_tmp, j) == 1)
		{
			i_tmp++;
			j++;
		}
		flag = (needle[j] == '\0') ? 1 : 0;
		i = (flag == 0) ? (i + 1) : i;
	}
	return (ft_return(flag, hstack, ft_start_i(hstack, needle, i)));
}

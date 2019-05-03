/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:55:53 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/03 14:12:09 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*p;

	i = 0;
	while (s[i] != '\0' && i != start)
		i++;
	p = (char*)&s[i];
	if (!(p = malloc((sizeof(char) * len + 1))))
		return (NULL);
	else
		return (p);
}

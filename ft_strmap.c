/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:54:09 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/30 21:06:28 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)s;
	while (str[i] != '\0')
	{
		str[i] = (char)malloc(f(str[i]));
		i++;
	}
	//s[i] = malloc(f[s[i]);
	return (str);
}

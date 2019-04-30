/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:54:25 by cvernius          #+#    #+#             */
/*   Updated: 2019/04/30 21:07:09 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	str = (char*)s;
	while (str[i] != '\0')
	{
		str[i] = (char)malloc(f(i, str[i]));
		i++;
	}
	//str[i] = malloc(f(i, str[i]));
	return (str);
}

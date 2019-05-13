/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 22:14:10 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/13 19:40:53 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// #include <stdio.h>
// #include <string.h>

// void	*ft_memcpy(const void *dst, const void *src, size_t n);
// size_t	ft_strlen(char *s);


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	s_len;
	size_t	d_len;

	s_len = ft_strlen((char*)src);
	d_len = ft_strlen((char*)dst);
	d_len = (d_len < size) ? d_len : size;
	if (d_len == size)
		return (s_len + size);
	if (s_len < size - d_len)
		ft_memcpy(dst + d_len, src, s_len + 1);
	else
	{
		ft_memcpy(dst + d_len, src, size - d_len - 1);
		dst[d_len + size - 1] = '\0';
	}
	return (d_len + s_len);
}


// int main(void)
// {
// 	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
//     char    buff1[0xF00] = "there is no stars in the sky";
//     char    buff2[0xF00] = "there is no stars in the sky";
//     size_t  max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + strlen("the cake is a lie !\0I'm hidden lol\r\n");

//     printf("%zu  %zu\n", strlcat(buff1, str, max), ft_strlcat(buff2, str, max));
// 	printf("%s\n%s\n", buff1, buff2);
// 	return (0);
// }


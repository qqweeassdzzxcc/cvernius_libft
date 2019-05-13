/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:46:20 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/13 19:41:56 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// //void    *ft_memset(void *b, int c, size_t len);
// //void	ft_bzero(void *s, size_t n);
// //void    *ft_memcpy(const void *dst, const void *src, size_t n);
// //void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
// char			*ft_strstr(const char *haystack, const char *needle);

// int main()
// {
// 	/*
// 	char buffer[10];
// 	char buffer2[10];
// 	strcpy(buffer, "123456789");
// 	strcpy(buffer2, "qqйqqqqqq");
// 	printf("ft_memset\nmy ===   %s\norig === %s\n", ft_memset(&buffer,'1', 5), memset(&buffer,'1', 5));
// 	//printf("my ===   %s\norig === %s\n", ft_bzero(&buffer, 5), bzero(&buffer, 5));
// 	printf("ft_memcpy\nmy ===   %s\norig === %s\n", ft_memcpy(&buffer2, &buffer, 3), memcpy(&buffer2, &buffer, 3));
	
// 	char dst[10];
// 	char src[10];
// 	strcpy(dst, "123456789"); //КУДА !!!
// 	strcpy(src, "qqqww4www"); //ОТКУДА !!!
// 	printf("ft_memccpy\nmy ===   %s\norig === %s\n", ft_memccpy(&dst, &src, '4', 10), memccpy(&dst, &src, '4', 10));//ft_memccpy(&to, &from, ' ', 7)
// 	*/
// 	char t[30];
// 	char v[7];

// 	strcpy(t, "1234abc5677abcd778567abcdef89");
// 	strcpy(v, "abcdef");
// 	printf("ft_strstr\nmy = %s\nor = %s\n", ft_strstr((const char *)t, (const char *)v), strstr((const char *)t, (const char *)v));
// 	printf("ft_strnstr\nmy = %s\nor = %s\n", ft_strnstr((const char *)t, (const char *)v, 20), strnstr((const char *)t, (const char *)v, 20));

// 	char s1[10];
// 	char s2[8];

// 	strcpy(s1, "");
// 	strcpy(s2, "");
// 	printf("ft_strcmp\nmy = %d\nor = %d\n", ft_strcmp((const char *)s1, (const char *)s2), strcmp((const char *)s1, (const char *)s2));

// 	char *s;

// 	s = ft_memalloc(3);
// 	printf("s == %s\n", s);

// 	printf("ft_atoi\nmy = %d\nor = %d\n", ft_atoi("+1234qweq\0"), atoi("+1234qweq\0"));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 16:33:20 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/13 22:58:33 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	return (ft_strnstr(haystack, needle, ft_strlen(haystack)));
}
// int		main()
// {
// 	char	*s1 = "abababcabcabcd";
// 	char	*s2 = "abcd";
// 	//printf("ft_ststr: %s\n", ft_strstr(str, "les"));
// 	//printf("  strstr: %s\n", strstr(str, "les"));
// 	if (strstr(s1, s2) != ft_strstr(s1, s2))
// 		printf("Error\n");
// 	else
// 		printf("It works");
// 	return (0);
// }
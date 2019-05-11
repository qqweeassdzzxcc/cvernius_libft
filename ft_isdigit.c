/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 19:49:57 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/11 23:31:09 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int		ft_isdigit(int ch)
{
	return ((ch >= 0 && ch <= 9) ? 1 : 0);
}

 int main(void)
 {
	 int i;
	  
	 			i = -1;
			while (i < 530)
			{
				if (!!ft_isdigit(i) != !!isdigit(i))
					printf("%d %d %d\n", i, ft_isdigit(i), isdigit(i));
				i++;
			}
 }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 15:12:34 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/06 15:12:36 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tlst;
	t_list	*newlst;

	tlst = lst;
	while (tlst->next != NULL)
	{
		if (!(newlst = malloc(sizeof(t_list))))
			return (NULL);
		newlst = f(tlst);
		tlst = tlst->next;
	}
	return(newlst);
}
/*
применяет функцию f к каждой ссылке, чтобы создать «свежий»
 список (используя malloc (3)), полученный в результате 
 последовательных применений функции f.
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 15:12:34 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/11 16:40:31 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const t_list	*ft_del_lstcpy(t_list *new_head)
{
	t_list *tmp;

	while (new_head)
	{
		new_head->content = NULL;
		new_head->content_size = 0;
		tmp = new_head->next;
		new_head->next = NULL;
		new_head = tmp;	
	}
	return (NULL);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tlst;
	t_list	*newlst;
	t_list	*new_head;
	t_list	*tmp;

	tlst = lst;
	if (!(newlst = malloc(sizeof(t_list))))
		return (NULL);
	newlst = f(tlst);
	new_head = newlst;
	tmp = newlst;
	tlst = tlst->next;
	while (tlst)
	{
		if (!(newlst = malloc(sizeof(t_list))))
			return ((t_list*)ft_del_lstcpy(new_head));
		newlst = f(tlst);
		tmp->next = newlst;
		tmp = newlst;
		tlst = tlst->next;
	}
	return(newlst);
}

/*
while (count >= 0)
{
	t_list *first;
	t_list *tmp;


	tmp = ft_createelem(count);
	first->next = tmp;

}

применяет функцию f к каждой ссылке, чтобы создать новый
 список (используя malloc (3)), полученный в результате 
 последовательных применений функции f.
1. маллок
2. ф
3. заполнение
*/
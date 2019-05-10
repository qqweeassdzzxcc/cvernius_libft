/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 15:10:27 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/10 16:45:29 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *tlst;
	t_list *tmp;

	tlst = lst;
	tmp = lst;
	//while (tlst->next != NULL)
	while (tmp->next)
	{
		tlst = tmp;
		f(tlst);
		tmp = tmp->next;
	}
}

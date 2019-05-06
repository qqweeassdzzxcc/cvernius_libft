/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 15:11:41 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/06 15:14:19 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**lst;
	t_list	**tmp;

	lst = alst;
	tmp = NULL;
	while ((*lst)->next != NULL)
	{
		del((*lst), sizeof((*lst)->content));
		(*tmp) = (*lst)->next;
		(*lst)->next = NULL;
		(*lst) = (*tmp);
	}
	free(*alst);
	alst = NULL;
}

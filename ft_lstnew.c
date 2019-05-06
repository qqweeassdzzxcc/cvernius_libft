/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvernius <cvernius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 15:10:15 by cvernius          #+#    #+#             */
/*   Updated: 2019/05/06 15:10:19 by cvernius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_node;
	char	*data;
	size_t	data_size;

	data = (char*)content;
	data_size = content_size;
	if (!(new_node = malloc(sizeof(t_list))))
		return (NULL);
	if (data == 0)
	{
		data = NULL;
		data_size = 0;
		new_node->content = data;
	}
	else
	{
		new_node->content = malloc(sizeof(data_size));
		new_node->content = ft_memcpy(new_node->content, data, data_size);
	}
	new_node->content_size = data_size;
	new_node->next = NULL;
	return (new_node);
}

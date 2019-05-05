#include "ft_header.h"

void ft_lstdel(t_list **alst, void (*del)(void *,size_t))
{
	t_list	**lst;
	t_list	**tmp;

	lst = alst;
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

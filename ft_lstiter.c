#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(t_list
*elem))
{
	t_list *tlst;

	tlst = lst;
	while (tlst->next != NULL)
	{
		f(tlst);
		tlst = tlst->next;
	}
}

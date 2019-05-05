#include "ft_header.h"

void ft_lstadd(t_list **alst, t_list *new)
{
	(*alst)->next = new;
	new->next = NULL;
}

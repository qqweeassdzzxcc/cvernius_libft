#include "ft_header.h"

void ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	del((*alst)->content, sizeof((*alst)->content));
	free(alst);
	alst = NULL;
}

#include "ft_header.h"

void	ft_strdel(char **as)
{
	free(*as);
	**as = NULL;
}

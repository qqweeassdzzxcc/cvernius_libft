#include "ft_header.h"

void	*ft_memalloc(size_t size)
{
	void	*p;
	int		i;

	i = 0;
	if (!(p = malloc(size)))
		return (NULL);
	else
	{
		while (p[i] < size)
		{
			p[i] = ft_bzero(&p[i], 1);
			i++;
		}
		return (p);
	}
}

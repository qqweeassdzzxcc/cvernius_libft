#include "ft_header.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = f(&s[i]);
		i++;
	}
}

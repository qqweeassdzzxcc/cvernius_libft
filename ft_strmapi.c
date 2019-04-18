#include "ft_header.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = malloc(f(i, s[i]));
		i++;
	}
	s[i] =  malloc(f(i, s[i]));
	return (s);
}

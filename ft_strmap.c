#include "ft_header.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = malloc(f(s[i]));
		i++;
	}
	s[i] = malloc(f[s[i]);
	return (s);
}

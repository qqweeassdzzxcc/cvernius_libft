#include "ft_header.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*p;

	i = 0;
	while (s[i] != '\0' && i != start)
		i++;
	p = &s[i];
	if (!(p = malloc(((sizeof)char) * len + 1)))
		return (NULL);
	else
		return (p);
}

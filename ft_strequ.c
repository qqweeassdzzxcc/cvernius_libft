#include "ft_header.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;

	i = 0;
	while (s[i] !='\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		return (1);
		else
	return (0);		
}

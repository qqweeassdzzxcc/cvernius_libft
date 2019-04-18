#include "ft_header.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *s;

	s = malloc (((sizeof) char) * (ft_strlen(s1) + ft_strlen(s2) - 1));
	while (s1[i] != '\0')
	{
		s[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s[j] = s2[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return (s);
}

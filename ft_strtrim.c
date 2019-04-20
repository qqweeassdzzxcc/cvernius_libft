//#include "ft_header.h"
#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int 	j;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	j = ft_strlen((char*)s);
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (s[j] >= 0 && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		j--;
	if (!(str = malloc(sizeof(char) * (j - i + 2))))
		return (NULL);
	else
	{
		while (i <= j)
		{
			str[k] = s[i];
			k++;
			i++;
		}
		str[k] = '\0';
		return (str);
	}
}

int		main(void)
{
	//ft_strtrim("    muaaaayyyy   	\0");
	printf("otv =%s\n", ft_strtrim("    muaaaayyyy   	\0"));
	return (0);
}
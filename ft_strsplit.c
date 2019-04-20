//#include "ft_header.h"
#include <stdlib.h>
#include <stdio.h>


static int		ft_count_str(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}

static int		ft_count_sym_instr(char const *s, char c, int k)
{
	while (s[k] != c && s[k] != '\0')
		k++;
	return (k);
}

static char		**ft_split_finish(char const *s, char c, char **str)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (s[k] != '\0')
	{
		while (s[k] == c && s[k] != '\0')
			k++;
		if (s[k] != c)
		{
			j = 0;
			while (s[k] != c && s[k] != '\0')
			{
				if ((str[i] = malloc(sizeof(char) * (ft_count_sym_instr(s, c, k) + 1))))
					str[i][j] = s[k];
				k++;
				j++;
			}
			str[i][j] = '\0';
			i++;
		}
		str[i][j] = '\0';
	}
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		count;

	count = ft_count_str(s, c);
	if (!(str = malloc((sizeof(char*) * (count + 1)))))
		return (NULL);
	else
		return (ft_split_finish(s, c, str));
}

int main(void)
{
	char **ft;
	int i;

	i = 0;
	ft = ft_strsplit("***my***name***is*Cat*", '*');
	while (*ft[i] != '\0')
	{
		printf("ft[i] = %s\n", ft[i]);
		i++;
	}
	return (0);
}

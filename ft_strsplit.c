//#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int		ft_count_words(char const *s, char c)
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
	printf("count = %d\n", count);
	return (count);
}

static int		ft_count_sym(char const *s, char c, int k)
{
	while (s[k] != c && s[k] != '\0')
		k++;
	return (k);
}

static char		**ft_allocate_mem(char const *s, char c, char **str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (s[k] != '\0')
	{
		while (s[k] == c && s[k] != '\0')
			k++;
		if (s[k] != c && s[k] != '\0')
		{
			printf("k = %d, func = %d\n", k, ft_count_sym(s, c, k));
			if (!(str[i] = malloc(sizeof(char) *
									(ft_count_sym(s, c, k) - k + 1))))
				return (NULL);
			else
				i++;
			k++;
		}
	}
	return (str);
}

static char	**ft_get_str(char const *s, char c, char **str)
{
	int i;
	int j;
	int k;

	k = 0;
	i = 0;
	while (s[k] != '\0')
	{
		while (s[k] == c && s[k] != '\0')
			k++;
		if (s[k] != c && s[k] != '\0')
		{
			j = 0;
			while (k != ft_count_sym(s, c, k))
			{
				str[i][j] = s[k];
				k++;
				j++;
			}
			str[i][j] = '\0';
			i++;
		}
	}
	str[i][0] = '\0';
	return (str);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		count;

	count = ft_count_words(s, c);
	if (!(str = malloc((sizeof(char*) * (count + 1)))))
		return (NULL);
	else
	{
		if ((ft_allocate_mem(s, c, str)) == NULL)
			return (NULL);
		else
			str = ft_get_str(s, c, str);
	}
	return (str);
}

int		main(void)
{
	char	**ft;
	int		i;

	i = 0;
	ft = ft_strsplit("***my*name**", '*');
	return (0);
}

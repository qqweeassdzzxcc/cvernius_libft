#include "ft_header.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = malloc((sizeof char) * (size + 1)))
		return (NULL);
	else
	{
		while (str[i] < size + 1)
		{
			str[i] = ft_bzero(&str[i], 1);
			i++;
		}
		return (str);
	}
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// size_t		ft_strlen(const char *s);

// int		main(void)
// {
// 	/*
// 	char *s;
// 	if (!(s = malloc(sizeof(char) * (-11 + 2))))
// 		printf("NULL\n");
// 	else
// 		printf("OK!\n");
// 	return (0);
// 	*/

// 	size_t	i;
// 	size_t	j;
// 	size_t	k;
// 	char	*str;
// 	char	*s;

// 	s = malloc(sizeof(char) * 6);
// 	s[0] = ' ';
// 	s[1] = '\n';
// 	s[2] = ' ';
// 	s[3] = ' ';
// 	s[4] = ' ';
// 	s[5] = ' ';
// 	//s[6] = '\0';
// 	i = 0;
// 	k = 0;
// 	j = ft_strlen((char*)s) - 1;
// 	printf("qqqj = %zu  i = %zu\n", j, i);
// 	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
// 		i++;
// 	while (j != i && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
// 	{
// 		j--;
// 	printf("j = %zu  i = %zu\n", j, i);
// 	}
// 	if (j < i || (!(str = malloc(sizeof(char) * (j - i + 2)))))
// 		printf("NULL\n");
// 	else
// 	{
// 		while (i <= j)
// 		{
// 			str[k] = s[i];
// 			k++;
// 			i++;
// 		}
// 		str[k] = '\0';
// 		printf("%s\n", str);
// 	}
// 	return (0);
// }

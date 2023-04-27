#include<stdlib.h>
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t  i;
	size_t  l;
	char    *str;

	l = ft_strlen(s);
    i = 0;
	str = malloc(sizeof(char) * (l + 1));
	if (str == 0)
		return (str);
	while (i < l)
	{
		str[i] = (*f)(i, str[i]);
		i++;
	}
	str[i] = 0;
	return (str);
}
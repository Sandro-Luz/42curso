#include<stdlib.h>
void    ft_striteri(char *s, void (*f)(unsigned int, char*))
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
		(*f)(i, str);
		i++;
	}
}

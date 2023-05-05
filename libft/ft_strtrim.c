#include "libft.h"
char    *ft_strtrim(char const *s1, char const *set)
{
    char   *p;
    size_t len;
    
    len = ft_strlen((char *)s1);
    p = malloc(len + 1);
    while(len > 0 && *s1 && ft_strchr(set, *s1))
    {
        len--;
        s1++;
    }
    while (len > 0 && ft_strchr(set, s1[len - 1]))
        len--;
    ft_memcpy(p, s1, len);
    p[len] = '\0';       
    return (p);
}

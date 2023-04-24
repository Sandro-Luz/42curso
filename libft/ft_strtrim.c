#include "libft.h"
char    *ft_strtrim(char const *s1, char const *set)
{
    unsigned char   *p;
    size_t len;
    
    len = ft_strlen(s1);
    p = malloc(len + 1);
    while(len > 0 && *s1 && ft_strchr(set, *s1))
    {
        len--;
        s1++;
    }
    while (len > 0 && strchr(set, s1[len - 1]))
        len--;
    ft_memcpy(p, s1, len);
    p[len] = '\0';        
    return (p);
}

/*#include<stdio.h>
int main() {
    char arr[] = "  \t  HELLO , WORLD! \n\r";
    char arr1[] = " \t\n\r";
    printf("%s\n", arr);              // before trimming
    printf("%s\n", ft_strtrim(arr, arr1));  // after trimming
    return 0;
}*/

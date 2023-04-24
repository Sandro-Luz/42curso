#include<stdlib.h>
#include<string.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned char *p;

    p = malloc(len + 1);
    if(start > ft_strlen(len))
        return (NULL);
    ft_strlcpy(p, s + start, len);
    p[len] = '\0';
    return p;
}

/*#include<stdio.h>
int main()
{
    const char arr[] = "HEllo, World!";
    printf("%s", ft_substr(arr, 5, sizeof(arr)));
    return 0;
}*/
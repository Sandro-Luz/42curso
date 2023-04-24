#include<stdlib.h>
char    *ft_strjoin(const char *str1, const char *str2)
{
    unsigned char   *totalstr;
    int len1;
    int len2;

    len1 = ft_strlen(str1);
    len2 = ft_strlen(str2);
    totalstr = malloc(len1 + len2 + 1);
    if(totalstr)
    {
        ft_strlcpy(totalstr, str1, len1);
        ft_strlcat(totalstr, str2, len2);
    }
    return (totalstr);
}
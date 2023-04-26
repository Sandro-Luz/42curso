#include<unistd.h>
void    ft_putstr_fd(char *s, int fd)
{
    write(fd, s, ft_strlen(s));
}

int main()
{
    int a = 1;
    char arr[]= "motehtefasfa";
    ft_putstr_fd(arr, a);
}
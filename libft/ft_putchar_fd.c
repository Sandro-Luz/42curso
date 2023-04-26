#include<unistd.h>
void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, sizeof(c));
}

int main()
{
    int  i = 1;
    char *a = "asdfghjk";
    ft_putchar_fd(*a, i);
    return 0;
}
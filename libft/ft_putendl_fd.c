#include<unistd.h>
void    ft_putendl_fd(char *s, int fd)
{
    char newline;

    newline = '\n';
    write(fd, s, ft_strlen(s));
    write(fd, &newline, 1);
}

int main()
{
    int i = 1;
    char arr[] = "sfasfs";
    ft_putendl_fd(arr, i);
}
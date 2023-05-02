#include"libft.h"
void    ft_putnbr_fd(int n, int fd)
{
    long int    nr;

    nr = n;
    if (nr < 0)
    {
        ft_putchar_fd('-', fd);
        nr = nr * (-1);
    }
    if (nr < 10)
    {
        ft_putchar_fd(nr + '0', fd);
    }
    else
    {
        ft_putnbr_fd(nr / 10, fd);
        ft_putchar_fd(nr % 10 + '0', fd);
    }
}

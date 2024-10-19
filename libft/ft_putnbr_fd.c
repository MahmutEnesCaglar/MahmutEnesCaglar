#include "header.h"

void ft_putnbr_fd(int n, int fd)
{
    char x;
        //   2147483647
    if(n==-2147483648)
        return ft_putstr_fd("-2147483648",fd);
    if(n<0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    if(n>9)
    {
        ft_putnbr_fd(n/10, fd);
        x = n % 10 + 48;
        write(fd, &x, 1);
    }
    else
    {
        x=n+48;
        write(fd, &x, 1);
    }
}
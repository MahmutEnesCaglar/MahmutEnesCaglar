#include <unistd.h>

void ft_putchar (char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int a)
{
    if(a==-2147483648)
    {
        write(1,"-2147483648",11);
        return;
    }
    if(a<0)
    {
        a *= -1;
        write(1,"-",1);
    }
    if(a<10)
    {
        char c = a + 48;
        write(1,&c,1);
    }
    else if(a>9)
    {  
        char c = (a % 10) + 48;
        ft_putnbr(a / 10);
        write(1,&c,1);
    }
}


int main()
{
    ft_putnbr(13);
    ft_putnbr(-2147483648);


}

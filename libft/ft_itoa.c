#include "header.h"

char *ft_itoa(int n)
{
    char *str;
    int i=0;
    int x = n<0?-n:n;
    if(n == (-2147483648))
        return ("-2147483648");
    if(n<0)
        i++;
    while(x / 10 > 0 && ++i)
        x /= 10; 
    str = (char*)malloc(sizeof(char)*(i+1));
    x=n<0?-n:n;

    str[i+1] = '\0';
    while(x!=0)
    {
        str[i--]=x%10+'0';
        x/=10;
    }
    if(i!=-1)
        str[0]='-';
    return str;
}
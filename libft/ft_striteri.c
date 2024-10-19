#include "header.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i = 0;
    while(s[i])
        f(1,&s[i++]);
}
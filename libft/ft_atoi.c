#include "header.h"

int ft_atoi(char* str)
{
    int sign = 1;
    int i=0;
    int result=0;

    while(ft_isspace(str[i]))
        i++;
    if(str[i] == '-' || str[i] == '+')
        if(str[i++] == '-')
            sign *= -1;
    while(ft_isdigit(str[i]))
        result = result * 10 + str[i++] - '0';
    return result * sign;
}
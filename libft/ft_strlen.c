unsigned int ft_strlen(char const * str)
{
    unsigned int a=0;
    while(str[a]!='\0')
        a++;
    return (a);
}

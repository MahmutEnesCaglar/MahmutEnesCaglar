int		ft_toupper(char i)
{
    if (i >= 'a' && i <= 'z')
        return (i - 32);
    return (i);
}
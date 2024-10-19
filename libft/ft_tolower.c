int		ft_tolower(char i)
{
    if (i >= 'A' && i <= 'Z')
        return (i + 32);
    return (i);
}
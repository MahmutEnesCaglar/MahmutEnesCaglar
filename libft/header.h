# ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
#include <stdlib.h>

int		ft_atoi( char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int x);
int		ft_isalpha(int x);
int		ft_isascii(int x);
int		ft_isdigit(int x);
int		ft_isprint(int x);
int     ft_isspace(int x);
void	*ft_memchr( void *s, int c, size_t n);
int		ft_memcmp( void *s1,  void *s2, size_t n);
void	*ft_memcpy(void *dest,  void *src, size_t n);
void	*ft_memmove(void *s1,  void *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strchr( char *s, int i);
char	*ft_strdup( char *s);
size_t	ft_strlcat(char *dest,  char *src, size_t size);
size_t	ft_strlcpy(char *dest,  char *src, size_t size);
unsigned int ft_strlen( char const * str);
int		ft_strncmp( char *s1, char *s2, size_t n);
char	*ft_strnstr( char *haystack,  char *needle, size_t len);
char	*ft_strrchr( char *s, int c);
int		ft_tolower(char i);
int		ft_toupper(char i);


char *ft_substr(char const *s, unsigned int start,size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char  *s1, char  *set);
// char **ft_split(char const *s, char c);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);    
void ft_putnbr_fd(int n, int fd);


# endif
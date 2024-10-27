#include <stdio.h>
#include "libft.h"

char b[] = "deneme texti";

int main()
{
	int a = ft_strlen(b);
//    printf("%d",a);	


   char *ptr;
   ft_memset(ptr,66,6);
   ft_bzero(ptr,3);
   for(int i=0;i<5;i++)
   {
	   printf("%d",*(ptr++));
   }



	// printf("%d\n",ft_isdigit(99));
	// printf("%d\n",ft_isdigit(55));
	// printf("%d\n",ft_isdigit('0'));
	// printf("%d\n",ft_isdigit('1'));
	// printf("%d\n",ft_isdigit('2'));
	// printf("%d\n",ft_isdigit('3'));
	// printf("%d\n",ft_isdigit('4'));
	// printf("%d\n",ft_isdigit('5'));
	// printf("%d\n",ft_isdigit('6'));
	// printf("%d\n",ft_isdigit('7'));
	// printf("%d\n",ft_isdigit('8'));
	// printf("%d\n",ft_isdigit('9'));
	// printf("%d\n",ft_isdigit('a'));
	// printf("%d\n",ft_isdigit('q'));


	
	// printf("%d",ft_isalpha('A'));
	// printf("%d",ft_isalpha('&'));
	// printf("%d",ft_isalpha('a'));
	// printf("%d",ft_isalpha('z'));


}

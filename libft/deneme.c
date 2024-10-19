#include "libft\header.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


char fonks(unsigned int i,char c){ return (c+i);}
void fonkifonki(unsigned int i,char* c){ *c += i;}
void newl(void){write(1,"\n",1);}


int main() {

    FILE *dosya = fopen("dosya.txt", "w");
    if (dosya == NULL) {
        printf("Dosya açma hatası!");
        return 1;
    }

    char karakter = 'B'; // Yazmak istediğiniz karakter

    ft_putchar_fd(karakter, 3); // Dosyaya karakteri yazma işlemi

    printf("%d",fileno(dosya));

    fclose(dosya); // Dosyayı kapatmayı unutmayın.
    return 0;
    
}


/*
int main ()
{

// ft_putchar_fd('a',1);
// newl();
// ft_putstr_fd("hello",1);
// newl();
// ft_putendl_fd("hello",1);
// newl();
// ft_putnbr_fd(12345,1);
// newl();
// ft_putnbr_fd(-12345,1);
// newl();
// ft_putnbr_fd(-2147483648,1);
// newl();
// printf("'  hello  ' trimmed : '%s'", ft_strtrim("  h  ", " "));
// printf("'    ' trimmed : '%s'", ft_strtrim("    ", " "));
    // FILE* fd;

    // fd = fopen("dosya.txt","w");

    // ft_putchar_fd('a',(int)fd);
    // ft_putchar_fd('b',(int)fd);




    // char helo[]="ben malim abey";
    // char *ptr;
    // ptr = ft_strmapi(helo,fonks);
    // printf("%s\n",ptr);
    // printf("%s\n",helo);
    // ft_striteri(helo,fonkifonki);
    // printf("%s\n",helo);
    // char str[] = "ordeklerden nefret ederim";

    // char *ptr;

    // ptr=ft_strdup(str);

    // printf("%p  %s  \n",str,str);
    // printf("%p  %s  \n",ptr,ptr);


    // char ptr[12];
    // printf("%s",itoa(-2147483648,ptr,10));

    // char str1[]="& ornek ";
    // char str2[]="metin 1500";

    // char set=49.90;
    // printf("  hello %c",set);
    // char *ptr;
    // ptr = ft_strjoin(str1,str2);
    // printf("%s %d ",ptr, ft_strlen(ptr));

    return(0);
}
*/
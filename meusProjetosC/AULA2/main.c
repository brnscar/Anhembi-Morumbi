#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("%s, RA %i, cursando %s \n" , "bruno heckmaier", 21035156 , "ciencia da computaçao");
    printf("idade %i , peso %i , sexo %c \n " , 23 , 68 , 'M');






    return 0;
}

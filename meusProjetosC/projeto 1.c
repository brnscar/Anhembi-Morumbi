#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("%i"  , 120-30 == 3*30);
    printf("%i" , !(20%4 == 1 || 9!==9))






    return 0;
}

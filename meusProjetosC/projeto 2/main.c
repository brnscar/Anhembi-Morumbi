#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("%i \n"  , 120-30 == 3*30);
    printf("%i \n" , !(20%4==1) || (9!=9));
    printf("%i \n" , (5%2/2)>3);
    printf("%.2f \n" , (8.0+7.5+4.5+9)/4);
    printf("A area de um quadrado de 350m eh %ix%i entao portanto a area do quadrado eh %im² \n", 350,350,350*350 );

    return 0;
}

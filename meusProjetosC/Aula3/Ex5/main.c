#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int altura;
    int base;
    int at;
    char formaGeometrica[50] = "";
    printf(" Digite a altura do triangulo: \n");
    scanf("%d", &altura);

      printf(" Digite a base do triangulo: \n");
    scanf("%d", &base);

    at = (altura * base) / 2;

    printf(" Digite a forma geometrica: \n");
    scanf("%s", &formaGeometrica);

      printf("\n A area da %s é: %d \n", formaGeometrica ,at);
    return 0;
}

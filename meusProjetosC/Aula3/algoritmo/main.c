#include <stdio.h>
#include <stdlib.h>

int main()
{
         setlocale(LC_ALL, "Portuguese");

    int numero;
    int numero2;
    int numero3;
    int numero4;
    int resultado;

    printf(" Digite o numero: \n");
    scanf("%i", &numero);

     printf(" Digite o segundo numero: \n");
    scanf("%i", &numero2);

     printf(" Digite o terceiro numero: \n");
    scanf("%i", &numero3);

     printf(" Digite o quarto numero: \n");
    scanf("%i", &numero4);

    resultado = numero+numero2+numero3+numero4;
         printf("\n O resultado é: %i \n", resultado);



    return 0;
}

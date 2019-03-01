#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;
    int numero2;
    int resultado;

    printf(" Digite o numero: \n");
    scanf("%d", &numero);

    printf(" Digite o segundo numero: \n");
    scanf("%d", &numero2);

    resultado = numero2*numero;

    printf(" O produto é: %d ", resultado);



    return 0;
}

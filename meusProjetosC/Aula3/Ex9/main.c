#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;
    int numeroCubo;
    int resultado;
    int raiz;

    printf(" Digite o numero: \n");
    scanf("%d", &numero);

    resultado =  numero*numero;

    printf(" O numero elevado ao quadrado �: %d \n", resultado);


    numeroCubo = numero*numero*numero;

    printf(" O numero a ser elevado ao cubo �: %d \n", numeroCubo);

    raiz = numero/numero;

    printf(" A raiz quadrada do numero �: %d \n", raiz);




    return 0;
}

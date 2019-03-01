#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;
    int multiplo;
    int resultado;


    printf("Digite o numero: \n");
    scanf("%d", &numero);

    if (numero%numero==0) {
        for (multiplo=1; multiplo <= 10; multiplo++) {
            resultado = multiplo*numero;
            printf("\n %d x %d é: %d", numero, multiplo, resultado);
        }
    }

    return 0;
}

    //Variaveis: Espaço de armazenamento de dados.
    // Variaveis não podem ter caracteres especiais e nem palavras reservadas

    //Como declarar String?
    //char atributo [limite] = "";
    // É uma cadeia de caracteres.

    //inteiro dividido por inteiro é inteiro

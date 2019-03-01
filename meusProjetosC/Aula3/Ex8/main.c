#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int palpite;

    printf(" Digite o palpite: \n");
    scanf("%d", &palpite);

    if (palpite==7) {
        printf(" Você acertou \n");


        else if (palpite < 7){
            printf("\n seu numero esta abaixo motherfuck");
                scanf("%d", &palpite);

        }
        else {
            printf("seu numero está acima ");
                scanf("%d", &palpite);

        }


       }
       system("pause");
    return 0;
}


// Desvio condicional: Simples, se a condição for verdadeira vamos para a proxima
//instrução do programa. Se for falsa

// Desvio composto: Se a condição for falsa, vamos para o bloco se não de instrução

// Encadeado:

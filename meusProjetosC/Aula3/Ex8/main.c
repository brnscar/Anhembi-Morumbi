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
        printf(" Voc� acertou \n");


        else if (palpite < 7){
            printf("\n seu numero esta abaixo motherfuck");
                scanf("%d", &palpite);

        }
        else {
            printf("seu numero est� acima ");
                scanf("%d", &palpite);

        }


       }
       system("pause");
    return 0;
}


// Desvio condicional: Simples, se a condi��o for verdadeira vamos para a proxima
//instru��o do programa. Se for falsa

// Desvio composto: Se a condi��o for falsa, vamos para o bloco se n�o de instru��o

// Encadeado:

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
        setlocale(LC_ALL, "Portuguese");

    int nascimento;
    int anoAtual;
    int idade;
    int anoFuturo =2030;
    int idadeFutura;

    printf(" Quando voc� nasceu? \n");
    scanf("%d", &nascimento);

     printf(" Em que ano estamos? \n");
    scanf("%d", &anoAtual);

    idade = anoAtual-nascimento;

    idadeFutura = anoFuturo - nascimento;

     printf(" Voc� tem %d anos e em 2030 voc� ter� %d", idade, idadeFutura);




    return 0;
}

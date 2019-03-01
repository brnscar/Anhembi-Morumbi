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

    printf(" Quando você nasceu? \n");
    scanf("%d", &nascimento);

     printf(" Em que ano estamos? \n");
    scanf("%d", &anoAtual);

    idade = anoAtual-nascimento;

    idadeFutura = anoFuturo - nascimento;

     printf(" Você tem %d anos e em 2030 você terá %d", idade, idadeFutura);




    return 0;
}

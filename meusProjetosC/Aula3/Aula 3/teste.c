#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");

        char endereco [30] = "";
        int div, nGuiches, exp;
        char sexo, resp;
        float media, preco;


        div = 10/2;

        media = (8.0+2.0) /2;
        exp = 3<9;
        resp= 's';

        printf("A divisao �: %d");
        printf("Qual seu endere�o? %");
        scanf("%s", &endereco);
        printf("O seu endere�o � %s", endereco)

        printf("A media � %f", media);
        resp='n';
        printf("A resposta �: %c ", resp);

    return 0;

}


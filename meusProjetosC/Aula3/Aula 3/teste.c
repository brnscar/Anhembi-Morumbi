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

        printf("A divisao é: %d");
        printf("Qual seu endereço? %");
        scanf("%s", &endereco);
        printf("O seu endereço é %s", endereco)

        printf("A media é %f", media);
        resp='n';
        printf("A resposta é: %c ", resp);

    return 0;

}


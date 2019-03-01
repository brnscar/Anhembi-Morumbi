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

        printf("A divisao é: %d", div);
        printf("\n Qual seu endereço? \n");
        scanf("%s", &endereco);
        printf("\n O seu endereço é: %s", endereco);

        printf("\n A media é: %f \n", media);
        resp='n';
        printf(" A resposta é: %c \n", resp);


      system ("pause");
     return 0;
}



    // Como fazer a entrada de um dado String?
    // gets (atributo);

    // dar espaço antes do %representação do tipo do atributo

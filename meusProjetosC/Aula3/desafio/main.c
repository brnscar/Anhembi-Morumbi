#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");

    char nome [20] = "";
     int idade;
     char sexo;

     printf(" Informe seu nome: \n");
     gets(nome);
     printf(" seu nome �: %s \n", nome);

     printf("\n Insira sua idade: \n");
     scanf(" %d", &idade);
    printf(" Sua idade �: %d", idade);

     printf(" \n Digite o seu sexo: ");
     scanf(" %c", &sexo);
    printf(" Seu sexo �:  %c", sexo);






 return 0;
}

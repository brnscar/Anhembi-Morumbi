#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
     setlocale(LC_ALL, "Portuguese");

    char nome [20] = "";
     int idade;
     char sexo;

     printf(" Informe seu nome: %s \n");
     gets(nome);
     printf(" seu nome é: %s", nome);

     printf(" Insira sua idade: %d \n");
     scanf("%d", &idade);
    printf(" Sua idade é: %s", idade);

     printf(" Digite o seu sexo: %s");
     gets(sexo);
    printf(" Seu sexo é:  %c", sexo);






 system("pause");
 return 0;
}

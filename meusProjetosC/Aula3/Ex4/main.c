#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario;

    printf("Digite seu salario: \n");
    scanf(" %f", &salario);
    printf(" O salario �: %f \n", salario);

    salario += salario*0.25;

    printf(" O salario com aumento �: %f \n", salario);





    return 0;
}

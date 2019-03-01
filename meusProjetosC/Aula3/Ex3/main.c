#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL, "Portuguese");

    float nota;
    float nota2;
    float nota3;
    float resultado;

    printf(" Digite a nota: \n");
    scanf("%f", &nota);

    printf(" Digite a segunda nota: \n");
    scanf("%f", &nota2);

    printf(" Digite a terceira nota: \n");
    scanf("%f", &nota3);

    resultado = (nota + nota2 + nota3) / 3;

        printf(" O resultado da média é: %f \n", resultado);






    system("pause");
    return 0;
}

#include <stdio.h>

int main(void)
{
    printf("----Exercicio 3----");
    float lado1, lado2;

    printf("\n\nEntre com o valor do lado 1: ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &lado1);

    printf("Entre com o valor do lado 2: ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &lado2);

    float areaQ;
    areaQ = lado1 * lado2;

    printf("A area do quadrado e: %0.1f ", areaQ);

    return 0;
}


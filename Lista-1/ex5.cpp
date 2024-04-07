#include <stdio.h>

int main(void)
{
    printf("----Exercicio 5----");
    float lado1, lado2;

    printf("\n\nEntre com o valor do lado 1 (base): ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &lado1);

    printf("Entre com o valor do lado 2 (altura): ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &lado2);

    float areaT;
    areaT = (lado1 * lado2) / 2;

    printf("A area do triangulo e: %0.1f ", areaT);

    return 0;
}


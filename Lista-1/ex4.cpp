#include <stdio.h>

int main(void)
{
    printf("----Exercicio 4----");
    float lado1, lado2;

    printf("\n\nEntre com o valor do lado 1: ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &lado1);

    printf("Entre com o valor do lado 2: ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &lado2);

    float perimetro;
    perimetro = (lado1 * 2) + (lado2 * 2);

    printf("O perimetro e: %0.1f ", perimetro);

    return 0;
}


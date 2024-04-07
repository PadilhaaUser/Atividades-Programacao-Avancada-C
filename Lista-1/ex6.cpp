#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("----Exercicio 6----");
    float lado1, lado2, lado3;
    float perimetroT;

    printf("\n\nEntre com o valor do lado 1 (cateto 1): ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &lado1);

    printf("Entre com o valor do lado 2 (cateto 2): ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &lado2);

    lado3 = sqrt(lado1 * lado1 + lado2 * lado2);
    perimetroT = lado1 + lado2 + lado3;

    printf("O perimetro do triangulo e: %0.1f ", perimetroT);

    return 0;
}



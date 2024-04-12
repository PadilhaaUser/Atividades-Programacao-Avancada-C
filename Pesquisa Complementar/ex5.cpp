#include <stdio.h>

int main() {
    float lado1, lado2;
    float perimetro;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &lado2);

    perimetro = 2 * (lado1 + lado2);

    printf("O perimetro do quadrado e: %.2f\n", perimetro);

    return 0;
}


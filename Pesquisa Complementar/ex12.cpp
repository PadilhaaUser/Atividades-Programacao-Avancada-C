#include <stdio.h>

int main() {
    float x, y, z;
    float resultado;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

    printf("Digite o valor de z: ");
    scanf("%f", &z);

    resultado = ((x - 5) * y) - z;

    printf("O resultado da expressao ((x - 5) * y) - z e: %.2f\n", resultado);

    return 0;
}


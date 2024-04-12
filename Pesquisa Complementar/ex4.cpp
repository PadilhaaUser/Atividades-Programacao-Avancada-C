#include <stdio.h>

int main() {
    float lado1, lado2;
    float area;

    printf("Digite o comprimento do primeiro lado: ");
    scanf("%f", &lado1);

    printf("Digite o comprimento do segundo lado: ");
    scanf("%f", &lado2);

    area = lado1 * lado2;

    printf("A area do quadrado e: %.2f\n", area);

    return 0;
}


#include <stdio.h>
#include <math.h>

float calcularPerimetro(float lado1, float lado2) {
    float hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));

    float perimetro = lado1 + lado2 + hipotenusa;

    return perimetro;
}

int main() {
    float lado1, lado2;
    float perimetro;

    printf("Digite o comprimento do primeiro lado do triangulo retangulo: ");
    scanf("%f", &lado1);

    printf("Digite o comprimento do segundo lado do triangulo retangulo: ");
    scanf("%f", &lado2);

    perimetro = calcularPerimetro(lado1, lado2);

    printf("O perimetro do triangulo retangulo e: %.2f\n", perimetro);

    return 0;
}


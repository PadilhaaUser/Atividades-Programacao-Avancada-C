#include <stdio.h>

float calcularArea(float base, float altura) {
    float area = (base * altura) / 2;

    return area;
}

int main() {
    float base, altura;
    float area;

    printf("Digite o comprimento da base do triangulo retangulo: ");
    scanf("%f", &base);

    printf("Digite o comprimento da altura do triangulo retangulo: ");
    scanf("%f", &altura);

    area = calcularArea(base, altura);

    printf("A area do triangulo retangulo e: %.2f\n", area);

    return 0;
}


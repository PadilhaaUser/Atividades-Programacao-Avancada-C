#include <stdio.h>
#include <math.h>

#define PI 3.14159

float calcularArea(float raio) {
    float area = PI * pow(raio, 2);

    return area;
}

int main() {
    float raio;
    float area;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    area = calcularArea(raio);

    printf("A area da circunferencia e: %.2f\n", area);

    return 0;
}


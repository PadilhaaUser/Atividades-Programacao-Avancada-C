#include <stdio.h>
#include <math.h>

#define PI 3.14159

float calcularCircunferencia(float raio) {
    float circunferencia = 2 * PI * raio;

    return circunferencia;
}

int main() {
    float raio;
    float circunferencia;

    printf("Digite o raio da circunferencia: ");
    scanf("%f", &raio);

    circunferencia = calcularCircunferencia(raio);

    printf("A circunferencia e: %.2f\n", circunferencia);

    return 0;
}


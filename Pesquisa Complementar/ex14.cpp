#include <stdio.h>

int main() {
    float temperaturaFahrenheit, temperaturaCelsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    temperaturaCelsius = (temperaturaFahrenheit - 32) * 5 / 9;

    printf("A temperatura em Celsius e: %.2f\n", temperaturaCelsius);

    return 0;
}


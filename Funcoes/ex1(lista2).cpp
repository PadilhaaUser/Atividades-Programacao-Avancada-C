#include <stdio.h>

// Definindo a struct Retangulo
typedef struct {
    float base;
    float altura;
} Retangulo;

// Fun��o para calcular a �rea do ret�ngulo
float calcularArea(Retangulo r) {
    return r.base * r.altura;
}

int main() {
    Retangulo r;
    
    // Preenchendo os valores do ret�ngulo
    printf("Digite a base do retangulo: ");
    scanf("%f", &r.base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &r.altura);
    
    // Calculando e imprimindo a �rea
    printf("A area do retangulo eh: %.2f\n", calcularArea(r));
    return 0;
}


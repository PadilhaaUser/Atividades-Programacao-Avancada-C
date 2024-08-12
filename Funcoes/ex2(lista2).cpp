#include <stdio.h>
#include <math.h>

// Definindo a struct Ponto
typedef struct {
    float x;
    float y;
} Ponto;

// Função para calcular a distância entre dois pontos
float calcularDistancia(Ponto p1, Ponto p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Ponto p1, p2;
    
    // Preenchendo os valores dos pontos
    printf("Digite as coordenadas do primeiro ponto (x y): ");
    scanf("%f %f", &p1.x, &p1.y);
    printf("Digite as coordenadas do segundo ponto (x y): ");
    scanf("%f %f", &p2.x, &p2.y);
    
    // Calculando e imprimindo a distância
    printf("A distância entre os pontos é: %.2f\n", calcularDistancia(p1, p2));
    return 0;
}


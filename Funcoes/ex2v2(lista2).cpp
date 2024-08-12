#include <stdio.h>
#include <math.h>

// Função para calcular a distância entre dois pontos em uma linha reta
double calcularDistancia(double pontoA, double pontoB) {
    return fabs(pontoB - pontoA);
}

int main() {
    double pontoA, pontoB;

    // Solicitando a entrada do usuário para o ponto A
    printf("Entre com a posição do ponto A (em km): ");
    scanf("%lf", &pontoA);

    // Solicitando a entrada do usuário para o ponto B
    printf("Entre com a posição do ponto B (em km): ");
    scanf("%lf", &pontoB);

    // Calculando e imprimindo a distância
    printf("A distância entre os pontos A e B é: %.2f km\n", calcularDistancia(pontoA, pontoB));

    return 0;
}


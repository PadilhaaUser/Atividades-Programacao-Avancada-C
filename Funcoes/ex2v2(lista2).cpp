#include <stdio.h>
#include <math.h>

// Fun��o para calcular a dist�ncia entre dois pontos em uma linha reta
double calcularDistancia(double pontoA, double pontoB) {
    return fabs(pontoB - pontoA);
}

int main() {
    double pontoA, pontoB;

    // Solicitando a entrada do usu�rio para o ponto A
    printf("Entre com a posi��o do ponto A (em km): ");
    scanf("%lf", &pontoA);

    // Solicitando a entrada do usu�rio para o ponto B
    printf("Entre com a posi��o do ponto B (em km): ");
    scanf("%lf", &pontoB);

    // Calculando e imprimindo a dist�ncia
    printf("A dist�ncia entre os pontos A e B �: %.2f km\n", calcularDistancia(pontoA, pontoB));

    return 0;
}


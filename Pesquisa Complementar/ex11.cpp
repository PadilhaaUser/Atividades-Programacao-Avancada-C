#include <stdio.h>

int main() {
    int A, B, C;
    int resultado;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    resultado = (A - B) * C;

    printf("O resultado da expressao (A - B) * C e: %d\n", resultado);

    return 0;
}


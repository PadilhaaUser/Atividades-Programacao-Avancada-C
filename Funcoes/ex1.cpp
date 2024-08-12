#include <stdio.h>

void verificarParOuImpar(int numero) {
    if (numero % 2 == 0) {
        printf("%d eh par\n", numero);
    } else {
        printf("%d eh ímpar\n", numero);
    }
}
int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    verificarParOuImpar(numero);
    return 0;
}


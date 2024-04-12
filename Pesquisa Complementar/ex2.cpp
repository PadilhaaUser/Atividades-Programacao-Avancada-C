#include <stdio.h>

int main() {
    int numero1, numero2;
    int soma, subtracao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    subtracao = numero1 - numero2;

    printf("A soma dos numeros e: %d\n", soma);
    printf("A subtracao dos numeros e: %d\n", subtracao);

    return 0;
}


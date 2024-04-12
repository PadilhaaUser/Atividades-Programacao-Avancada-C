#include <stdio.h>

int inverterNumero(int num) {
    int invertido = 0;
    while (num != 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}

int main() {
    int primeiroDado, segundoDado;

    printf("Digite o primeiro dado: ");
    scanf("%d", &primeiroDado);

    printf("Digite o segundo dado: ");
    scanf("%d", &segundoDado);

    printf("O primeiro dado invertido: %d\n", inverterNumero(primeiroDado));
    printf("O segundo dado invertido: %d\n", inverterNumero(segundoDado));

    return 0;
}


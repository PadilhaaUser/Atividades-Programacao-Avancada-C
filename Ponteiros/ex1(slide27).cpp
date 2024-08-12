#include <stdio.h>
#include <stdlib.h>

int main() {
    // Alocando memória para um número inteiro
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    // Inserindo o número 27 na área de memória alocada
    *ptr = 27;
    printf("Valor armazenado: %d\n", *ptr);

    // Incrementando o valor usando o ponteiro
    (*ptr)++;
    printf("Valor apos incremento: %d\n", *ptr);

    // Desalocando a memória
    free(ptr);

    return 0;
}


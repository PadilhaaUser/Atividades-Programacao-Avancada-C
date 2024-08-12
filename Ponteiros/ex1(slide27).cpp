#include <stdio.h>
#include <stdlib.h>

int main() {
    // Alocando mem�ria para um n�mero inteiro
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Erro ao alocar mem�ria\n");
        return 1;
    }

    // Inserindo o n�mero 27 na �rea de mem�ria alocada
    *ptr = 27;
    printf("Valor armazenado: %d\n", *ptr);

    // Incrementando o valor usando o ponteiro
    (*ptr)++;
    printf("Valor apos incremento: %d\n", *ptr);

    // Desalocando a mem�ria
    free(ptr);

    return 0;
}


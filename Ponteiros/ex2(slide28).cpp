#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declara��o do vetor de ponteiros
    int *vet[5];

    // Alocando mem�ria para cada elemento do vetor
    for (int i = 0; i < 5; i++) {
        vet[i] = (int*)malloc(sizeof(int));
        if (vet[i] == NULL) {
            printf("Erro ao alocar mem�ria para vet[%d]\n", i);
            return 1;
        }
    }

    // Inserindo valores nas �reas de mem�ria alocadas
    for (int i = 0; i < 5; i++) {
        *vet[i] = i + 1; // Por exemplo, armazenando os valores 1, 2, 3, 4, 5
    }

    // Imprimindo os valores armazenados
    for (int i = 0; i < 5; i++) {
        printf("Valor armazenado em vet[%d]: %d\n", i, *vet[i]);
    }

    // Desalocando a mem�ria
    for (int i = 0; i < 5; i++) {
        free(vet[i]);
    }

    return 0;
}


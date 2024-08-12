#include <stdio.h>

int main() {
    int vetor[4];
    int *ptr;

    // Preenchendo o vetor usando ponteiros
    ptr = vetor; // Apontando ptr para o início do vetor
    *ptr = 2; // Primeiro elemento
    ptr++; // Avançando para o próximo elemento
    *ptr = 4; // Segundo elemento
    ptr++; // Avançando para o próximo elemento
    *ptr = 1; // Terceiro elemento
    ptr++; // Avançando para o próximo elemento
    *ptr = 10; // Quarto elemento

    // Imprimindo o vetor usando ponteiros
    ptr = vetor; // Apontando ptr para o início do vetor
    printf("Os elementos do vetor sao:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\n", *ptr); // Imprimindo o VALOR apontado por ptr
        ptr++; // Avançando para o próximo elemento
    }

    return 0;
}


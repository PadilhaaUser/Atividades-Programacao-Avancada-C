#include <stdio.h>

int main() {
    int vetor[4];
    int *ptr;

    // Preenchendo o vetor usando ponteiros
    ptr = vetor; // Apontando ptr para o in�cio do vetor
    *ptr = 2; // Primeiro elemento
    ptr++; // Avan�ando para o pr�ximo elemento
    *ptr = 4; // Segundo elemento
    ptr++; // Avan�ando para o pr�ximo elemento
    *ptr = 1; // Terceiro elemento
    ptr++; // Avan�ando para o pr�ximo elemento
    *ptr = 10; // Quarto elemento

    // Imprimindo o vetor usando ponteiros
    ptr = vetor; // Apontando ptr para o in�cio do vetor
    printf("Os elementos do vetor sao:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\n", *ptr); // Imprimindo o VALOR apontado por ptr
        ptr++; // Avan�ando para o pr�ximo elemento
    }

    return 0;
}


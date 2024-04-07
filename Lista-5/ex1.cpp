#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define PHONE_LENGTH 15

struct Pessoa {
    char nome[MAX_NAME_LENGTH];
    char telefone[PHONE_LENGTH];
};

int main() {
    struct Pessoa pessoa1;

    // Inserir nome usando strcpy
    char nome[] = "Joao";
    strcpy(pessoa1.nome, nome);

    // Inserir telefone
    char telefone[] = "123456789";
    strcpy(pessoa1.telefone, telefone);

    // Exibir os dados da pessoa
    printf("Nome: %s\n", pessoa1.nome);
    printf("Telefone: %s\n", pessoa1.telefone);

    return 0;
}


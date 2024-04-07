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

    // Ler nome usando scanf
    printf("Digite o nome da pessoa: ");
    scanf("%s", pessoa1.nome);

    // Inserir telefone
    printf("Digite o telefone da pessoa: ");
    scanf("%s", pessoa1.telefone);

    // Exibir os dados da pessoa
    printf("\nNome: %s\n", pessoa1.nome);
    printf("Telefone: %s\n", pessoa1.telefone);

    return 0;
}


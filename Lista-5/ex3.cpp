#include <stdio.h>

#define MAX_STRING_LENGTH 50

struct Cliente {
    char nome[MAX_STRING_LENGTH];
    int idade;
    char endereco[MAX_STRING_LENGTH];
};

int main() {
    struct Cliente cliente;

    // Preencher os dados do cliente usando scanf
    printf("Digite o nome do cliente: ");
    scanf(" %[^\n]", cliente.nome); // %[^\n] para ler strings com espaços
    printf("Digite a idade do cliente: ");
    scanf("%d", &cliente.idade);
    printf("Digite o endereco do cliente: ");
    scanf(" %[^\n]", cliente.endereco); // %[^\n] para ler strings com espaços

    // Imprimir os dados do cliente
    printf("\nDados do cliente:\n");
    printf("Nome: %s\n", cliente.nome);
    printf("Idade: %d\n", cliente.idade);
    printf("Endereco: %s\n", cliente.endereco);

    return 0;
}


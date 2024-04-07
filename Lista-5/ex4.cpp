#include <stdio.h>
#include <string.h>

#define MAX_STRING_LENGTH 50

struct ENDERECO {
    char rua[MAX_STRING_LENGTH];
    int numero;
    char cidade[MAX_STRING_LENGTH];
};

struct CADASTRO {
    struct ENDERECO endereco_comercial;
    struct ENDERECO endereco_residencial;
};

int main() {
    struct CADASTRO cliente;

    // Preencher endereço comercial
    printf("-Endereco Comercial-\n");
    printf("Digite o nome da rua: ");
    scanf(" %[^\n]", cliente.endereco_comercial.rua);
    printf("Digite o numero: ");
    scanf("%d", &cliente.endereco_comercial.numero);
    printf("Digite a cidade: ");
    scanf(" %[^\n]", cliente.endereco_comercial.cidade);

    // Preencher endereço residencial
    printf("\n-Endereco Residencial-\n");
    printf("Digite o nome da rua: ");
    scanf(" %[^\n]", cliente.endereco_residencial.rua);
    printf("Digite o numero: ");
    scanf("%d", &cliente.endereco_residencial.numero);
    printf("Digite a cidade: ");
    scanf(" %[^\n]", cliente.endereco_residencial.cidade);

    // Imprimir todo o conteúdo da estrutura
    printf("\n-Imprimindo o conteudo-\n");
    printf("Endereco Comercial\n");
    printf("Rua: %s\n", cliente.endereco_comercial.rua);
    printf("Numero: %d\n", cliente.endereco_comercial.numero);
    printf("Cidade: %s\n", cliente.endereco_comercial.cidade);
    printf("\nEndereco Residencial\n");
    printf("Rua: %s\n", cliente.endereco_residencial.rua);
    printf("Numero: %d\n", cliente.endereco_residencial.numero);
    printf("Cidade: %s\n", cliente.endereco_residencial.cidade);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

// Definição da substruct ENDERECO
struct ENDERECO {
    char rua[50];
    char cidade[50];
    char estado[3];
};

// Definição da struct CADASTRO
struct CADASTRO {
    struct ENDERECO *endereco_comercial;
    struct ENDERECO *endereco_residencial;
    char nome[50];
    int idade;
};

int main() {
    // Alocação de memória para as structs
    struct CADASTRO *cadastro = (struct CADASTRO *)malloc(sizeof(struct CADASTRO));
    cadastro->endereco_comercial = (struct ENDERECO *)malloc(sizeof(struct ENDERECO));
    cadastro->endereco_residencial = (struct ENDERECO *)malloc(sizeof(struct ENDERECO));

    if (cadastro == NULL || cadastro->endereco_comercial == NULL || cadastro->endereco_residencial == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Solicitação ao usuário para inserir os dados
    printf("Digite o nome: ");
    scanf(" %[^\n]", cadastro->nome);

    printf("Digite a idade: ");
    scanf("%d", &cadastro->idade);

    printf("-Digite o endereco comercial\n");
    printf("Rua: ");
    scanf(" %[^\n]", cadastro->endereco_comercial->rua);
    printf("Cidade: ");
    scanf(" %[^\n]", cadastro->endereco_comercial->cidade);
    printf("Estado: ");
    scanf(" %[^\n]", cadastro->endereco_comercial->estado);

    printf("-Digite o endereco residencial\n");
    printf("Rua: ");
    scanf(" %[^\n]", cadastro->endereco_residencial->rua);
    printf("Cidade: ");
    scanf(" %[^\n]", cadastro->endereco_residencial->cidade);
    printf("Estado: ");
    scanf(" %[^\n]", cadastro->endereco_residencial->estado);

    // Impressão dos dados
    printf("\n-Dados do cadastro\n");
    printf("Nome: %s\n", cadastro->nome);
    printf("Idade: %d\n", cadastro->idade);

    printf("-Endereco comercial\n");
    printf("Rua: %s\n", cadastro->endereco_comercial->rua);
    printf("Cidade: %s\n", cadastro->endereco_comercial->cidade);
    printf("Estado: %s\n", cadastro->endereco_comercial->estado);

    printf("-Endereco residencial\n");
    printf("Rua: %s\n", cadastro->endereco_residencial->rua);
    printf("Cidade: %s\n", cadastro->endereco_residencial->cidade);
    printf("Estado: %s\n", cadastro->endereco_residencial->estado);

    // Liberando a memória alocada
    free(cadastro->endereco_comercial);
    free(cadastro->endereco_residencial);
    free(cadastro);

    return 0;
}


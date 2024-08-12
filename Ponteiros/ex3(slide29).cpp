#include <stdio.h>
#include <stdlib.h>

// Definição da struct
struct Contato {
    char nome[50];
    char telefone[15];
};

int main() {
    // Alocação de memória para a struct
    struct Contato *contato = (struct Contato *)malloc(sizeof(struct Contato));

    if (contato == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Solicitação ao usuário para inserir os dados
    printf("Digite o nome: ");
    scanf(" %[^\n]", contato->nome);

    printf("Digite o telefone: ");
    scanf(" %[^\n]", contato->telefone);

    // Impressão dos dados
    printf("\nDados do contato:\n");
    printf("Nome: %s\n", contato->nome);
    printf("Telefone: %s\n", contato->telefone);

    // Liberando a memória alocada
    free(contato);

    return 0;
}


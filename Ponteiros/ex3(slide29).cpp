#include <stdio.h>
#include <stdlib.h>

// Defini��o da struct
struct Contato {
    char nome[50];
    char telefone[15];
};

int main() {
    // Aloca��o de mem�ria para a struct
    struct Contato *contato = (struct Contato *)malloc(sizeof(struct Contato));

    if (contato == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        return 1;
    }

    // Solicita��o ao usu�rio para inserir os dados
    printf("Digite o nome: ");
    scanf(" %[^\n]", contato->nome);

    printf("Digite o telefone: ");
    scanf(" %[^\n]", contato->telefone);

    // Impress�o dos dados
    printf("\nDados do contato:\n");
    printf("Nome: %s\n", contato->nome);
    printf("Telefone: %s\n", contato->telefone);

    // Liberando a mem�ria alocada
    free(contato);

    return 0;
}


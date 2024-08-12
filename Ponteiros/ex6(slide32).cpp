#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defini��o da struct CADASTRO
struct CADASTRO {
    char nome[50];
    char telefone[15];
};

int main() {
    // Vetor de ponteiros para structs CADASTRO
    struct CADASTRO *vet[5];

    // Preenchendo as structs com scanf
    for (int i = 0; i < 5; i++) {
        // Aloca��o de mem�ria para a struct CADASTRO
        vet[i] = (struct CADASTRO *)malloc(sizeof(struct CADASTRO));

        if (vet[i] == NULL) {
            printf("Erro ao alocar memoria.\n");
            // Se ocorrer um erro, liberar a mem�ria alocada at� agora
            for (int j = 0; j < i; j++) {
                free(vet[j]);
            }
            return 1;
        }

        // Solicita��o ao usu�rio para inserir os dados
        printf("Digite o nome do cadastro %d: ", i + 1);
        scanf("%s", vet[i]->nome);

        printf("Digite o telefone do cadastro %d: ", i + 1);
        scanf("%s", vet[i]->telefone);
    }

    // Imprimindo os dados
    printf("\n-Dados dos cadastros\n");
    for (int i = 0; i < 5; i++) {
        printf("Cadastro %d:\n", i + 1);
        printf("Nome: %s\n", vet[i]->nome);
        printf("Telefone: %s\n", vet[i]->telefone);
        printf("\n");
    }

    // Liberando a mem�ria alocada
    for (int i = 0; i < 5; i++) {
        free(vet[i]);
    }

    return 0;
}


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_CONTATOS 100
#define MAX_NOME 50
#define MAX_TELEFONE 15

// Definição da struct Contato
struct Contato {
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];
};

// Função para remover caracteres especiais de uma string
void removerCaracteresEspeciais(char *str) {
    int i, j;
    for (i = 0; str[i] != '\0'; ++i) {
        while (!(isalnum(str[i]) || isspace(str[i]))) {
            for (j = i; str[j] != '\0'; ++j) {
                str[j] = str[j + 1];
            }
            str[j] = '\0';
        }
    }
}

// Função para limpar o buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    // Declaração da agenda telefônica como um vetor de structs Contato
    struct Contato agenda[MAX_CONTATOS];
    int numContatos = 0;

    int opcao;
    do {
        // Exibindo o menu
        printf("\n--- Menu ---\n");
        printf("1. Novo\n");
        printf("2. Remover\n");
        printf("3. Buscar\n");
        printf("4. Editar\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        limparBuffer();

        switch (opcao) {
            case 1: // Novo contato
                if (numContatos < MAX_CONTATOS) {
                    printf("\nNovo Contato\n");
                    printf("Nome: ");
                    scanf(" %[^\n]s", agenda[numContatos].nome);
                    removerCaracteresEspeciais(agenda[numContatos].nome);
                    printf("Telefone: ");
                    scanf("%s", agenda[numContatos].telefone);
                    numContatos++;
                    printf("Contato adicionado com sucesso!\n");
                } else {
                    printf("Agenda cheia. Nao e possivel adicionar mais contatos.\n");
                }
                break;
            case 2: // Remover contato
                if (numContatos > 0) {
                    char nomeRemover[MAX_NOME];
                    printf("\nRemover Contato\n");
                    printf("Nome: ");
                    scanf(" %[^\n]s", nomeRemover);
                    removerCaracteresEspeciais(nomeRemover);

                    int i;
                    int encontrado = 0;
                    for (i = 0; i < numContatos; i++) {
                        if (strcmp(agenda[i].nome, nomeRemover) == 0) {
                            encontrado = 1;
                            break;
                        }
                    }

                    if (encontrado) {
                        for (; i < numContatos - 1; i++) {
                            strcpy(agenda[i].nome, agenda[i + 1].nome);
                            strcpy(agenda[i].telefone, agenda[i + 1].telefone);
                        }
                        numContatos--;
                        printf("\nContato removido com sucesso!\n");
                    } else {
                        printf("\nContato nao encontrado.\n");
                    }
                } else {
                    printf("\nAgenda vazia. Nao ha contatos para remover.\n");
                }
                break;
            case 3: // Buscar contato
                if (numContatos > 0) {
                    char nomeBuscar[MAX_NOME];
                    printf("\nBuscar Contato\n");
                    printf("Nome: ");
                    scanf(" %[^\n]s", nomeBuscar);
                    removerCaracteresEspeciais(nomeBuscar);

                    int i;
                    int encontrado = 0;
                    for (i = 0; i < numContatos; i++) {
                        if (strcmp(agenda[i].nome, nomeBuscar) == 0) {
                            encontrado = 1;
                            break;
                        }
                    }

                    if (encontrado) {
                        printf("\nContato encontrado:\n");
                        printf("Nome: %s\n", agenda[i].nome);
                        printf("Telefone: %s\n", agenda[i].telefone);
                    } else {
                        printf("\nContato nao encontrado.\n");
                    }
                } else {
                    printf("Agenda vazia. Nao ha contatos para buscar.\n");
                }
                break;
            case 4: // Editar contato
                if (numContatos > 0) {
                    char nomeEditar[MAX_NOME];
                    printf("\nEditar Contato\n");
                    printf("Nome: ");
                    scanf(" %[^\n]s", nomeEditar);
                    removerCaracteresEspeciais(nomeEditar);

                    int i;
                    int encontrado = 0;
                    for (i = 0; i < numContatos; i++) {
                        if (strcmp(agenda[i].nome, nomeEditar) == 0) {
                            encontrado = 1;
                            break;
                        }
                    }

                    if (encontrado) {
                        printf("\nNovo Nome: ");
                        scanf(" %[^\n]s", agenda[i].nome);
                        removerCaracteresEspeciais(agenda[i].nome);
                        printf("Novo Telefone: ");
                        scanf("%s", agenda[i].telefone);
                        printf("Contato editado com sucesso!\n");
                    } else {
                        printf("\nContato nao encontrado.\n");
                    }
                } else {
                    printf("Agenda vazia. Nao ha contatos para editar.\n");
                }
                break;
            case 5: // Sair
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Escolha uma opcao valida.\n");
        }
    } while (opcao != 5);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da struct estática
struct ProdutoEstatico {
    int quantidade;
    char descricao[50];
    float valor_unitario;
};

// Definição da struct dinâmica
struct ProdutoDinamico {
    int quantidade;
    char *descricao;
    float valor_unitario;
};

int main() {
    // Preenchendo a struct estática com scanf
    struct ProdutoEstatico produto_estatico;
    printf("Digite a quantidade: ");
    scanf("%d", &produto_estatico.quantidade);
    printf("Digite a descricao: ");
    scanf(" %[^\n]", produto_estatico.descricao);
    printf("Digite o valor unitario: ");
    scanf("%f", &produto_estatico.valor_unitario);

    // Alocação de memória para a struct dinâmica
    struct ProdutoDinamico *produto_dinamico = (struct ProdutoDinamico *)malloc(sizeof(struct ProdutoDinamico));

    if (produto_dinamico == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // Copiando os dados da struct estática para a dinâmica
    produto_dinamico->quantidade = produto_estatico.quantidade;
    produto_dinamico->descricao = strdup(produto_estatico.descricao); // Aloca memória dinamicamente e copia a string
    produto_dinamico->valor_unitario = produto_estatico.valor_unitario;

    // Impressão da struct dinâmica
    printf("\n-Dados do produto dinamico\n");
    printf("Quantidade: %d\n", produto_dinamico->quantidade);
    printf("Descricao: %s\n", produto_dinamico->descricao);
    printf("Valor unitario: %.2f\n", produto_dinamico->valor_unitario);

    // Liberando a memória alocada
    free(produto_dinamico->descricao);
    free(produto_dinamico);

    return 0;
}


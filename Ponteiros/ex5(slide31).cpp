#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defini��o da struct est�tica
struct ProdutoEstatico {
    int quantidade;
    char descricao[50];
    float valor_unitario;
};

// Defini��o da struct din�mica
struct ProdutoDinamico {
    int quantidade;
    char *descricao;
    float valor_unitario;
};

int main() {
    // Preenchendo a struct est�tica com scanf
    struct ProdutoEstatico produto_estatico;
    printf("Digite a quantidade: ");
    scanf("%d", &produto_estatico.quantidade);
    printf("Digite a descricao: ");
    scanf(" %[^\n]", produto_estatico.descricao);
    printf("Digite o valor unitario: ");
    scanf("%f", &produto_estatico.valor_unitario);

    // Aloca��o de mem�ria para a struct din�mica
    struct ProdutoDinamico *produto_dinamico = (struct ProdutoDinamico *)malloc(sizeof(struct ProdutoDinamico));

    if (produto_dinamico == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    // Copiando os dados da struct est�tica para a din�mica
    produto_dinamico->quantidade = produto_estatico.quantidade;
    produto_dinamico->descricao = strdup(produto_estatico.descricao); // Aloca mem�ria dinamicamente e copia a string
    produto_dinamico->valor_unitario = produto_estatico.valor_unitario;

    // Impress�o da struct din�mica
    printf("\n-Dados do produto dinamico\n");
    printf("Quantidade: %d\n", produto_dinamico->quantidade);
    printf("Descricao: %s\n", produto_dinamico->descricao);
    printf("Valor unitario: %.2f\n", produto_dinamico->valor_unitario);

    // Liberando a mem�ria alocada
    free(produto_dinamico->descricao);
    free(produto_dinamico);

    return 0;
}


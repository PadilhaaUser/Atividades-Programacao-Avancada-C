#include <stdio.h>
#include <string.h>

// Definição da struct CADASTRO
struct CADASTRO {
    char nome[50];
    int idade;
};

int main() {
    // Declaração do vetor de structs CADASTRO
    struct CADASTRO cadastros[5];

    // Preenchendo os dados do vetor de structs CADASTRO
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf(" %[^\n]s", cadastros[i].nome); // %[^\n]s para permitir espaços em branco na entrada
        printf("\n");
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &cadastros[i].idade);
        printf("\n");
    }

    // Buscando a struct com a maior idade
    int indice_maior_idade = 0;
    for (int i = 1; i < 5; i++) {
        if (cadastros[i].idade > cadastros[indice_maior_idade].idade) {
            indice_maior_idade = i;
        }
    }

    // Imprimindo a struct com a maior idade
    printf("\nA pessoa mais velha é:\n");
    printf("Nome: %s\n", cadastros[indice_maior_idade].nome);
    printf("Idade: %d\n", cadastros[indice_maior_idade].idade);

    return 0;
}


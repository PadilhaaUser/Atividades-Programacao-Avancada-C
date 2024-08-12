#include <stdio.h>

// Definindo a struct Pessoa
typedef struct {
    char nome[100];
    int idade;
} Pessoa;

// Função para calcular a média de idades
float calcularMediaIdades(Pessoa pessoas[], int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += pessoas[i].idade;
    }
    return (float)soma / n;
}

int main() {
    int n;
    
    // Preenchendo o número de pessoas
    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);
    
    Pessoa pessoas[n];
    
    // Preenchendo os dados das pessoas
    for (int i = 0; i < n; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        scanf("%s", pessoas[i].nome);
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &pessoas[i].idade);
    }
    
    // Calculando e imprimindo a média das idades
    printf("A media das idades eh: %.2f\n", calcularMediaIdades(pessoas, n));
    
    return 0;
}


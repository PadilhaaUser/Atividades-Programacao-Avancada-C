#include <stdio.h>

// Fun��o para calcular e imprimir os N termos da sequ�ncia de Fibonacci
void fibonacci(int n) {
    int primeiro = 0, segundo = 1, proximo, i;

    // Caso especial para imprimir os primeiros dois termos
    if (n >= 1)
        printf("%d ", primeiro);
    if (n >= 2)
        printf("%d ", segundo);

    // Calculando e imprimindo os pr�ximos termos
    for (i = 3; i <= n; ++i) {
        proximo = primeiro + segundo;
        printf("%d ", proximo);
        primeiro = segundo;
        segundo = proximo;
    }
}

int main() {
    int n;

    // Solicita ao usu�rio o n�mero de termos a serem impressos
    printf("Digite o numero de termos da sequencia de Fibonacci a serem exibidos: ");
    scanf("%d", &n);

    // Verifica se o n�mero de termos � v�lido
    if (n <= 0) {
        printf("Por favor, insira um numero inteiro positivo.\n");
        return 1;
    }

    // Chamada da fun��o fibonacci para imprimir os termos
    printf("Sequencia de Fibonacci com %d termos:\n", n);
    fibonacci(n);

    return 0;
}

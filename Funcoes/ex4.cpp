#include <stdio.h>

int multiplicar(int num1, int num2) {
    return num1 * num2;
}

int main() {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    printf("O resultado da multiplicacao eh: %d\n", multiplicar(num1, num2));
    return 0;
}


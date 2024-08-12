#include <stdio.h>

int maiorNumero(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    printf("O maior numero eh: %d\n", maiorNumero(num1, num2));
    return 0;
}


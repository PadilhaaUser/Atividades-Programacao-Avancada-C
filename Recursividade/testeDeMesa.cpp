#include <stdio.h>

int soma(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + soma(n - 1);
    }
}

void teste_mesa() {
    int n;

    for (n = 1; n <= 5; n++) {
        int resultado = soma(n);
        printf("soma(%d) = %d\n", n, resultado);
    }
}

int main() {
    teste_mesa();

    return 0;
}


#include <stdio.h>

int main() {
    int x = 0, y = 0; // Inicializando as variáveis para evitar valores indefinidos
    int *pto_x, *pto_y;

    // Declaração das variáveis
    printf("Passo |   x   |   y   | pto_x   | pto_y   | Operação/Observação\n");
    printf("-------------------------------------------------------------\n");
    printf("  1   |   ?   |   ?   |    ?    |    ?    | Declaração das variáveis\n");

    // Inicialização dos ponteiros
    pto_x = &x;
    pto_y = &y;
    printf("  2   |   %d   |   %d   |   %p   |   %p   | Inicialização dos ponteiros\n", x, y, (void*)pto_x, (void*)pto_y);

    // Incremento de pto_x
    pto_x++;
    printf("  3   |   %d   |   %d   |   %p   |   %p   | pto_x++\n", x, y, (void*)pto_x, (void*)pto_y);

    // Atribuição de pto_y
    pto_y = pto_x;
    printf("  4   |   %d   |   %d   |   %p   |   %p   | pto_y = pto_x\n", x, y, (void*)pto_x, (void*)pto_y);

    // Modificação através de pto_y
    *pto_y = 2;
    printf("  5   |   %d   |   %d   |   %p   |   %p   | *pto_y = 2\n", x, y, (void*)pto_x, (void*)pto_y);

    // Atribuição de x
    x = y;
    printf("  6   |   %d   |   %d   |   %p   |   %p   | x = y\n", x, y, (void*)pto_x, (void*)pto_y);

    // Impressão de x
    printf("  7   |   %d   |   %d   |   %p   |   %p   | printf(x)\n", x, y, (void*)pto_x, (void*)pto_y);

    return 0;
}


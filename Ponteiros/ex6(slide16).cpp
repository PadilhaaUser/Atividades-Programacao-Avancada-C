#include <stdio.h>

int main() {
    int y, *p, x;
    y = 0;         // y � inicializado com 0
    p = &y;        // p � um ponteiro para y, ent�o p aponta para y
    x = *p;        // x recebe o valor apontado por p, que � o valor de y (x = 0)
    x = 4;         // x recebe o valor 4
    (*p)++;        // o valor apontado por p (y) � incrementado de 1 (y passa a ser 1)
    x++;           // x � incrementado de 1 (x passa a ser 5)
    (*p) += x;     // o valor apontado por p (y) � incrementado pelo valor de x (y = y + x, ou seja, y = 1 + 5)
    printf("%d", y); // imprime o valor de y
    return(0);
}


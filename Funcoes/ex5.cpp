#include <stdio.h>

int contarCaracteres(char* string) {
    int contador = 0;
    while (string[contador] != '\0') {
        contador++;
    }
    return contador;
}

int main() {
    char string[100];
    printf("Digite uma string: ");
    scanf("%s", string);
    printf("O numero de caracteres na string eh: %d\n", contarCaracteres(string));
    return 0;
}


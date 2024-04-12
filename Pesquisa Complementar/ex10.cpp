#include <stdio.h>
#include <math.h>

int main() {
    float numero;
    
    printf("Digite um numero fracionario: ");
    scanf("%f", &numero);
    
    int parteInteira = (int)floor(numero);
    
    printf("A parte inteira do numero fracionario e: %d\n", parteInteira);
    
    return 0;
}


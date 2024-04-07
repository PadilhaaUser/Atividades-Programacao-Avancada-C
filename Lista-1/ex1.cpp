#include <stdio.h>

int main(void)
{
    printf("----Exercicio 1----");
    float num1, num2;

    printf("\n\nEntre com o primeiro numero: ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &num1);

    printf("Entre com o segundo numero: ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &num2);

    float soma, sub;

    soma = num1 + num2;
    sub = num1 - num2;

    printf("\nA soma desses numeros e: %0.1f\nA subtracao desses numeros e: %0.1f", soma, sub);

    return 0;
}


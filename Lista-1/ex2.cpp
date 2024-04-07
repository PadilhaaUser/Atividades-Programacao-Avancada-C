#include <stdio.h>

int main(void)
{
    printf("----Exercicio 2----");
    float num1, num2, num3, num4;

    printf("\n\nEntre com o primeiro numero: ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &num1);

    printf("Entre com o segundo numero: ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &num2);

    printf("Entre com o terceiro numero: ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &num3);

    printf("Entre com o quarto numero: ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &num4);

    float media;
    media = (num1 + num2 + num3 + num4) / 4;

    printf("\nA media dos numeros e: %0.1f ", media);

    return 0;
}


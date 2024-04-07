#include <stdio.h>

int main(void)
{
    printf("----Exercicio 1-----");
    float produto1, produto2;

    fflush(stdin);
    printf("\n\nEntre com o valor do primeiro produto: ");
    scanf("%f", &produto1);

    fflush(stdin);
    printf("Entre com o valor do segundo produto: ");
    scanf("%f", &produto2);

    printf("\n\nO valor do primeiro produto eh maior que o segundo?");

    if (produto1 > produto2)
    {
        printf("\nSIM.");
    }
    else
    {
        printf("\nNAO.");
    }

    return 0;
}


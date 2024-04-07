#include <stdio.h>

int main(void)
{
    printf("----Exercicio 2----");

    float produto1, produto2;

    fflush(stdin);
    printf("\n\nEntre com o valor do primeiro produto: ");
    scanf("%f", &produto1);

    fflush(stdin);
    printf("Entre com o valor do segundo produto: ");
    scanf("%f", &produto2);

    if (produto1 > produto2)
    {
        printf("\n\nO produto 1 eh maior que o produto 2.");
    }
    if (produto1 < produto2)
    {
        printf("\n\nO produto 2 eh maior que o produto 1.");
    }
    if (produto1 == produto2)
    {
        printf("\n\nO preco dos dois produtos sao iguais.");
    }

    return 0;
}


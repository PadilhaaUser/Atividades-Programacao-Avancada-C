#include <stdio.h>

int main(void)
{
    printf("----Exercicio 4----");

    float nota1, nota2, nota3, nota4, media;

    printf("\n\nEntre com a primeira nota: ");
    fflush(stdin);
    scanf("%f", &nota1);

    printf("Entre com a segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);

    printf("Entre com a terceira nota: ");
    fflush(stdin);
    scanf("%f", &nota3);

    printf("Entre com a quarta nota: ");
    fflush(stdin);
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\nMedia: %.2f ", media);

    if (media >= 7)
    {
        printf("\nPassou!");
    }

    if (media < 7 && media >= 4)
    {
        printf("\nExame final!");
    }

    if (media < 4)
    {
        printf("\nReprovou!");
    }

    return 0;
}


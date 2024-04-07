#include <stdio.h>

int main(void)
{
    printf("----Exercicio 6----");

    float salario;

    printf("\n\nEntre com seu salario: ");
    fflush(stdin);
    scanf("%f", &salario);

    //Classe E
    if (salario <= 1254)
    {
        printf("\nEsta na classe E.");
    }

    //Classe D
    if (salario >= 1255 && salario <= 2004)
    {
        printf("\nEsta na classe D.");
    }

    //Classe C
    if (salario >= 2005 && salario <= 8640)
    {
        printf("\nEsta na classe C.");
    }

    //Classe B
    if (salario >= 8641 && salario <= 11261)
    {
        printf("\nEsta na classe B.");
    }

    //Classe A
    if (salario >= 11262)
    {
        printf("\nEsta na classe A.");
    }

    return 0;
}


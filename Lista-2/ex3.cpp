#include <stdio.h>

int main(void)
{
    printf("----Exercicio 3----");

    float temp;
    printf("\n\nDigite a temperatura da agua: ");
    fflush(stdin);
    scanf("%f", &temp);

    if (temp < 0)
    {
        printf("A agua esta congelada!");
    }
    if (temp > 0 && temp < 100)
    {
        printf("A agua esta liquida!");
    }
    if (temp >= 100)
    {
        printf("A agua esta fervendo!");
    }

    return 0;
}


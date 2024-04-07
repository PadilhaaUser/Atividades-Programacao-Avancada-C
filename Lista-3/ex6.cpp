#include <stdio.h>

int main(void)
{
    int y;

    printf("Digite um numero: ");
    scanf("%d", &y);

    printf("Asteriscos correspondentes: ");
    for (int i = 0; i < y; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}


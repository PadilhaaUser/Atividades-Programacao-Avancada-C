#include <stdio.h>

int main(void)
{
    int ve[20], x = 2;

    for (int i = 0; i < 20; i++)
    {
        ve[i] = x;
        x *= 2;
    }

    printf("Vetor preenchido com a sequência numérica:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", ve[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main(void)
{
    int vc[20];
    for (int i = 0; i < 20; i++)
    {
        vc[i] = (i + 1) * 2;
    }

    printf("Vetor preenchido com a sequencia numerica:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vc[i]);
    }
    printf("\n");

    return 0;
}


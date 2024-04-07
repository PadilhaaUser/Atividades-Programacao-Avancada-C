#include <stdio.h>

int main(void)
{
    int vd[20];

    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
        {
            vd[i] = 1;
        }
        else
        {
            vd[i] = -1;
        }
    }

    printf("Vetor preenchido com a sequência numérica alternada:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", vd[i]);
    }
    printf("\n");

    return 0;
}


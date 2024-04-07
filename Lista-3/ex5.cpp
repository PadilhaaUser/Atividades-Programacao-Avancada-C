#include <stdio.h>

int main(void)
{
    int vf[10], vg[10];

    vf[0] = 1;
    for (int i = 1; i < 10; i++)
    {
        vf[i] = vf[i - 1] * 2;
    }

    for (int i = 0; i < 10; i++)
    {
        vg[i] = vf[i] - vf[0];
    }

    printf("Vetor preenchido com a sequência numérica:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vg[i]);
    }
    printf("\n");

    return 0;
}


#include <stdio.h>

int main(void)
{
    int m;

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    for (int i = 1; i <= m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


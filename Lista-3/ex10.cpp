#include <stdio.h>

int main(void)
{
    int linhas = 5;
    int colunas = 6;

    int valor = 1;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", valor);
            valor++;
        }
        printf("\n");
    }

    return 0;
}


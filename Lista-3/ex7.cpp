#include <stdio.h>

int main(void)
{
    int o, p;

    printf("Digite quantas colunas deseja: ");
    scanf("%d", &o);

    printf("Digite quantas linhas deseja: ");
    scanf("%d", &p);

    printf("Asteriscos correspondentes:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < o; j++)
        {
            printf("   *");
        }
        printf("\n");
    }

    return 0;
}


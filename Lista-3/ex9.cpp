#include <stdio.h>

int main(void)
{
    for (int multiplicador = 1; multiplicador <= 10; multiplicador++)
    {
        printf("Tabuada do %d:\n", multiplicador);

        for (int multiplicando = 1; multiplicando <= 10; multiplicando++)
        {
            int produto = multiplicador * multiplicando;

            printf("%d x %d = %d\n", multiplicador, multiplicando, produto);
        }

        printf("\n");
    }

    return 0;
}


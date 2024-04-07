#include <stdio.h>

int main(void)
{
    printf("-----Exercicio 1-----\n\n");
    float va[5], vb[5], resultado[5];
    int opcao, i;

    printf("Digite 5 valores do vetor a:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &va[i]);
    }

    printf("Digite 5 valores do vetor b:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%f", &vb[i]);
    }

    printf("\n1-Soma \n2-Subtracao \n3-Multiplicacao \n4-Divisao \n5-Sair\n");
    fflush(stdin);
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nResultado:\n");
        for (int i = 0; i < 5; i++)
        {
            resultado[i] = va[i] + vb[i];
            printf("%.0f ", resultado[i]);
        }
        break;
    case 2:
        printf("\nResultado:\n");
        for (int i = 0; i < 5; i++)
        {
            resultado[i] = va[i] - vb[i];
            printf("%.0f ", resultado[i]);
        }
        break;
    case 3:
        printf("\nResultado:\n");
        for (int i = 0; i < 5; i++)
        {
            resultado[i] = va[i] * vb[i];
            printf("%.0f ", resultado[i]);
        }
        break;
    case 4:
        printf("\nResultado:\n");
        for (int i = 0; i < 5; i++)
        {
            if (vb[i] != 0)
            {
                resultado[i] = va[i] / vb[i];
                printf("%.2f ", resultado[i]);
            }
        
        }
        break;
    case 5:
        printf("\nSaiu!\n");
        break;
    default:
        printf("\nOpcao invalida\n");
    }

    return 0;
}


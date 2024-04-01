#include <stdio.h>

int main(void)
{
	int va[6],vb[6],i, resultado[6];

    printf("Digite 6 valores do vetor a:\n");
  	for (i = 0; i < 6; i++)
  	{
    	scanf("%d", &va[i]);
  	}

    printf("Digite 6 valores do vetor b:\n");
  	for (i = 0; i < 6; i++)
  	{
    	scanf("%d", &vb[i]);
  	}

  	printf("\nResultado:\n");
  	for (int i = 0; i < 6; i++)
	{
		resultado[i] = va[i]+vb[i];
    	printf("%d ", resultado[i]);
    }

}

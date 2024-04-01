#include <stdio.h>

int main(void)
{
	int valores[6],i;


  	for (i = 0; i < 6; i++)
  	{
    	printf("Digite o valor %d: ", i+1);
    	scanf("%d", &valores[i]);
  	}

  	printf("\nValores digitados:\n");
  	for (int i = 0; i < 6; i++)
	  {
    	printf("Valor %d: %d\n", i + 1, valores[i]);
    }

}

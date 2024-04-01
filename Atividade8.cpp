#include <stdio.h>

int main(void) {
  int i, j, numPrimo, numero;

  printf("Digite um numero: ");
  fflush(stdin);
  scanf("%d", &numero);

  for (i = 2; i <= numero; i++){
  	numPrimo = 1;
    for (j = 2; j <= i/2; ++j) {
      if (i % j == 0)
	  {
        numPrimo = 0;
        break;
      }
    }
    if (numPrimo)
	{
      printf("%d ", i);
    }
  }

  printf("\nContagem finalizada!\n");

}


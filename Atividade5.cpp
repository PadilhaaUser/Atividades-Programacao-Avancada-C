#include <stdio.h>

int main(void){

	float num1, num2, soma, sub, mult, div;
	int opcao, i=1;
	
	while (i == 1)
	{
		printf("Entre com 2 numeros");

		fflush(stdin);
		printf("\n\nPrimeiro valor: ");
		scanf("%f", &num1);
	
		fflush(stdin);
		printf("Segundo valor: ");
		scanf("%f", &num2);
	
		printf("\n1 Para imprimir a soma dos dois numeros \n2 Para imprimir a subtracao dos dois numeros \n3 Para imprimir a multiplicacao dos dois numeros \n4 Para imprimir a divisao dos dois numeros (SEM DIVISAO POR ZERO) \n5 Para sair\n");
		fflush(stdin);
		scanf("%d", &opcao);


		switch(opcao)
		{
			case 1:
				soma = num1+num2;
				printf("\nSoma: %.2f\n\n", soma);
			break;
			case 2:
				sub = num1-num2;
				printf("\nSubtracao: %.2f\n\n", sub);
	
			break;
			case 3:
				mult = num1*num2;
				printf("\nMultiplicacao: %.2f\n\n", mult);
			break;
			case 4:
				if(num2 != 0)
				{
					div = num1/num2;
					printf("\nDivisao: %.2f\n\n", div);
				}
				else
				{
					printf("\nNao pode ser feita divisao por 0!\n\n");
				}
			break;
			case 5:
				printf("Saiu");
				i = 0;
			break;
			default:
				printf("\nOpcao invalida!\n\n");
	
		}
	}
	
}

#include <stdio.h>

int main(void)
{
	int opcao;

	printf("Digite uma das 3 opcoes abaixo: \n1-Bom dia \n2-Boa tarde \n3-Boa noite \n4-Ate mais\n");
	fflush(stdin);
	scanf("%d", &opcao);

	switch(opcao){
		case 1:
			printf("Bom dia.");
		break;
		case 2:
			printf("Boa tarde.");
		break;
		case 3:
			printf("Boa noite.");
		break;
		case 4:
			printf("Ate mais.");
		break;
		default:
			printf("Opcao invalida.");
	}

}

#include <stdio.h>

int main(void)
{
	float nota1, nota2, media;

	fflush(stdin);
	printf("Entre com a nota 1: ");
	scanf("%f", &nota1);

	fflush(stdin);
	printf("\nEntre com a nota 2: ");
	scanf("%f", &nota2);

	media = (nota1 + nota2)/2;
	printf("\n\nA media e: %.1f", media);

	if (media >= 7){
		printf("\nSituacao: Aprovado.");
	}
	if(media >= 4 && media < 7){
		printf("\nSituacao: Exame final.");
	}
	if(media < 4){
		printf("\nSituacao: Reprovado.");
	};

}

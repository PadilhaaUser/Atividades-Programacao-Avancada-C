#include <stdio.h>
#include <string.h>

struct cliente
{
	char nome[20];
	int idade;
};

main (void){
	struct cliente cliente1;

	printf("Adicione o nome do cliente: ");
	fflush(stdin);
	scanf("%s", &cliente1.nome);

	printf("Adicione a idade do cliente: ");
	fflush(stdin);
	scanf("%d", &cliente1.idade);

	printf("\nNome:%s \nIdade:%d ", cliente1.nome, cliente1.idade);
}


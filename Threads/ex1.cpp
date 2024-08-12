#include <stdio.h>
#include <process.h>
#include <windows.h>
#include <conio.h>

void funcao1(void*);
void funcao2(void*);

int main()
{
	char nome[100];
	int idade;
	
	_beginthread(funcao1, 0, NULL); // inicia a primeira thread
	_beginthread(funcao2, 0, NULL); // inicia a segunda thread
	
	printf("Insira o seu nome\n");
	scanf("%[^\n]", nome); // corrigido o erro de formato
	
	getch();
	return 0;
}

void funcao1(void*)
{
	for (;;)
	{
		printf(".");
		Sleep(500); // altera o tempo de execução para 500 milissegundos (0.5 segundo)
	}
}

void funcao2(void*)
{
	for (;;)
	{
		printf("-");
		Sleep(1000); // altera o tempo de execução para 1000 milissegundos (1 segundo)
	}
}


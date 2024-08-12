#include <stdio.h>
#include <process.h>
#include <windows.h>
#include <conio.h>

void funcao1(void*);

int main()
{
	char nome[100];
	int idade;
	
	_beginthread(funcao1,0,NULL); //chama a funcao beep() e faz dela uma thread	
	
	printf("Insira o seu nome\n");
	scanf("%[\^n]", nome);
	
	getch();
	return(0);
	
}

void funcao1(void*)
{
	for(;;){
		printf(".");
		Sleep(1000);
	}
}

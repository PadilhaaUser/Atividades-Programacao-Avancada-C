#include <stdio.h>
#include <process.h>
#include <windows.h>
#include <conio.h>

void funcao1(void*);
void funcao2(void*);
void funcao3(void*);

int main()
{
	char nome[100];
	
    _beginthread(funcao1, 0, NULL); // inicia a primeira thread
    _beginthread(funcao2, 0, NULL); // inicia a segunda thread
    _beginthread(funcao3, 0, NULL); // inicia a terceira thread

	printf("Insira o seu nome\n");
	scanf("%[^\n]", nome); // corrigido o erro de formato

    getch();
    return 0;
}

void funcao1(void*)
{
    for (;;)
    {
        printf("-");
        Sleep(300); // altera o tempo de execução para 300 milissegundos (0.3 segundo)
    }
}

void funcao2(void*)
{
    for (int i = 1; ; i++)
    {
        printf("%d ", i);
        Sleep(500); // altera o tempo de execução para 500 milissegundos (0.5 segundo)
    }
}

void funcao3(void*)
{
    for (int i = 32; i < 128; i++) // imprime a tabela ASCII do caractere 32 ao 127
    {
        printf("%c ", i);
        Sleep(700); // altera o tempo de execução para 700 milissegundos (0.7 segundo)
    }
}


#include <stdio.h>
#include <process.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void animacao1(void*);
void animacao2(void*);

int main() {
    _beginthread(animacao1, 0, NULL); // inicia a primeira animação
    _beginthread(animacao2, 0, NULL); // inicia a segunda animação

    getch();
    return 0;
}

void animacao1(void* arg) {
    for (int i = 0; i < 20; i++) {
        gotoxy(i, 10);
        printf("*");
        Sleep(200); // tempo de execução da animação
    }
}

void animacao2(void* arg) {
    for (int i = 0; i < 20; i++) {
        gotoxy(i, 12);
        printf("#");
        Sleep(300); // tempo de execução da animação
    }
}


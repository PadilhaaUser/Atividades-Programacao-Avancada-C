#include <stdio.h>
#include <windows.h>
#include <process.h>

#define WIDTH 80

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void move_dots(void *param) {
    int y = *((int *)param);
    int x = 0;

    for (;;) {
        gotoxy(x, y);
        printf("-");
        fflush(stdout); // Força a saída do buffer

        Sleep(100); // Ajuste a velocidade conforme desejado

        printf("\b \b"); // Apaga o ponto anterior
        x = (x + 1) % WIDTH; // Move para a próxima posição
    }
}

int main() {
    const int NUM_THREADS = 5;
    HANDLE threads[NUM_THREADS];
    int starting_y[NUM_THREADS];

    for (int i = 0; i < NUM_THREADS; ++i) {
        starting_y[i] = i + 1; // Linhas diferentes para cada thread
        threads[i] = (HANDLE)_beginthread(move_dots, 0, &starting_y[i]);
    }

    getchar(); // Mantém o programa principal em execução

    return 0;
}

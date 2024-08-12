#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Estrutura para passar argumentos para a thread
typedef struct {
    int start;
    int end;
} ThreadArgs;

// Função da thread
void *printNumbers(void *arg) {
    ThreadArgs *args = (ThreadArgs *)arg;
    
    for (int i = args->start; i <= args->end; i++) {
        printf("%d\n", i);
    }
    
    pthread_exit(NULL);
}

int main() {
    int N;
    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);
    
    pthread_t thread;
    ThreadArgs args;

    // Dividindo o trabalho em threads
    for (int i = 0; i <= N; i += 10) {
        args.start = i;
        args.end = (i + 10 <= N) ? i + 10 : N;
        pthread_create(&thread, NULL, printNumbers, (void *)&args);
        pthread_join(thread, NULL);
    }
    
    pthread_exit(NULL);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <time.h>

// Estrutura para armazenar os dados do cliente
struct Cliente {
    char nome[100];
    char endereco[100];
};

// Função para mostrar o relógio na base do monitor
void *mostrarRelogio(void *arg) {
    while (1) {
        time_t rawtime;
        struct tm *timeinfo;
        char buffer[80];

        time(&rawtime);
        timeinfo = localtime(&rawtime);

        strftime(buffer, sizeof(buffer), "%H:%M:%S", timeinfo);

        printf("\r%s", buffer);
        fflush(stdout);

        sleep(1);
    }
    return NULL;
}

int main() {
    // Inicialização da thread para mostrar o relógio
    pthread_t threadRelogio;
    pthread_create(&threadRelogio, NULL, mostrarRelogio, NULL);

    // Parte para o cadastro do cliente
    struct Cliente cliente;

    printf("\n=== Cadastro de Cliente ===\n");
    printf("Nome: ");
    scanf("%s", cliente.nome);
    printf("Endereco: ");
    scanf("%s", cliente.endereco);

    printf("\n--- Dados do Cliente ---\n");
    printf("Nome: %s\n", cliente.nome);
    printf("Endereco: %s\n", cliente.endereco);

    // Aguardando a thread do relógio terminar (não será alcançado neste exemplo)
    pthread_join(threadRelogio, NULL);

    return 0;
}

#include <stdio.h>

int main() {
    int segundos, horas, minutos, segundos_restantes;

    printf("Digite um valor inteiro em segundos: ");
    scanf("%d", &segundos);

    //horas
    horas = segundos / 3600; // 1 hora = 3600 segundos

    //minutos restantes
    segundos_restantes = segundos % 3600;
    minutos = segundos_restantes / 60;

    //segundos restantes
    segundos_restantes = segundos_restantes % 60;

    printf("O valor em horas, minutos e segundos e: %02d:%02d:%02d\n", horas, minutos, segundos_restantes);

    return 0;
}


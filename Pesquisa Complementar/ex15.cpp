#include <stdio.h>

int main() {
    //Dados
    int distancia = 520; // em km
    int consumoCarro = 12; // em litros por km
    float precoGasolina = 2.60; // em reais por litro

    float quantidadeGasolina = (float)distancia / consumoCarro;

    float custoViagem = quantidadeGasolina * precoGasolina;

    printf("Quantidade de gasolina necessaria: %.2f litros\n", quantidadeGasolina);
    printf("Custo da viagem: R$ %.2f\n", custoViagem);

    return 0;
}


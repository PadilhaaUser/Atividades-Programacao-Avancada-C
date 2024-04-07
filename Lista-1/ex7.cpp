#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("----Exercicio 7----");
    float raio;
    const double pi = M_PI;
    float areaC;

    printf("\n\nEntre com o valor do raio: ");
    fflush(stdin); // linha para limpeza do buffer do teclado
    scanf("%f", &raio);

    areaC = pi * (raio * raio);
    printf("A area do circulo e: %0.1f ", areaC);

    return 0;
}
	

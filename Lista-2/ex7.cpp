#include <stdio.h>

int main(void)
{
    printf("----Exercicio 7----");

    float peso, altura, IMC;

    printf("\n\nEntre com seu peso: ");
    fflush(stdin);
    scanf("%f", &peso);

    printf("Entre com sua altura: ");
    fflush(stdin);
    scanf("%f", &altura);

    IMC = peso / (altura * altura);
    printf("\nIMC: %.2f ", IMC);

    if (IMC < 18.5)
    {
        printf("\nMAGREZA - OBESIDADE GRAU 0");
    }

    if (IMC >= 18.5 && IMC <= 24.9)
    {
        printf("\nNORMAL - OBESIDADE GRAU 0");
    }

    if (IMC >= 25 && IMC <= 29.9)
    {
        printf("\nSOBREPESO - OBESIDADE GRAU I");
    }

    if (IMC >= 30 && IMC <= 39.9)
    {
        printf("\nOBESIDADE - OBESIDADE GRAU II");
    }

    if (IMC >= 40)
    {
    	printf("\nOBESIDADE GRAVE - OBESIDADE GRAU III");
    }

    return 0;
}



#include <stdio.h>

int main(void)
{
	printf("----Exercicio 1-----");
	float produto1, produto2;

	fflush(stdin);
	printf("\n\nEntre com o valor do primeiro produto: ");
	scanf("%f", &produto1);

	fflush(stdin);
	printf("Entre com o valor do segundo produto: ");
	scanf("%f", &produto2);

	printf("\n\nO valor do primeiro produto eh maior que o segundo?");

	if(produto1 > produto2){
		printf("\nSIM.");
	}
	else{
		printf("\nNAO.");
	}

	printf("\n\n----Exercicio 2----");

	fflush(stdin);
	printf("\n\nEntre com o valor do primeiro produto: ");
	scanf("%f", &produto1);

	fflush(stdin);
	printf("Entre com o valor do segundo produto: ");
	scanf("%f", &produto2);

	if(produto1 > produto2){
		printf("\n\nO produto 1 eh maior que o produto 2.");
	}
	if(produto1 < produto2){
		printf("\n\nO produto 2 eh maior que o produto 1.");
	}
	if(produto1 == produto2){
		printf("\n\nO preco dos dois produtos sao iguais.");
	}

	printf("\n\n----Exercicio 3----");

	float temp;
	printf("\n\nDigite a temperatura da agua: ");
	fflush(stdin);
	scanf("%f", &temp);

	if(temp<0)
	{
		printf("A agua esta congelada!");
	}
	if(temp > 0 && temp < 100)
	{
		printf("A agua esta liquida!");
	}
	if(temp>=100)
	{
		printf("A agua esta fervendo!");
	}
	
	printf("\n\n----Exercicio 4----");
	
	float nota1, nota2, nota3, nota4, media;
	
	printf("\n\nEntre com a primeira nota: ");
	fflush(stdin);
	scanf("%f", &nota1);
	
	printf("Entre com a segunda nota: ");
	fflush(stdin);
	scanf("%f", &nota2);
	
	printf("Entre com a terceira nota: ");
	fflush(stdin);
	scanf("%f", &nota3);
	
	printf("Entre com a quarta nota: ");
	fflush(stdin);
	scanf("%f", &nota4);
	
	media = (nota1+nota2+nota3+nota4)/4;
	
	printf("\nMedia: %.2f ", media);
	
	if (media >=7 )
	{
		printf("\nPassou!");
	}
	
	if (media <7 && media >=4)
	{
		printf("\nExame final!");
	}
	
	if (media < 4)
	{
		printf("\nReprovou!");
	}
	
	printf("\n\n----Exercicio 5----");
	float notaEx;
	
	printf("\n\nEntre com a primeira nota: ");
	fflush(stdin);
	scanf("%f", &nota1);
	
	printf("Entre com a segunda nota: ");
	fflush(stdin);
	scanf("%f", &nota2);
	
	printf("Entre com a terceira nota: ");
	fflush(stdin);
	scanf("%f", &nota3);
	
	printf("Entre com a quarta nota: ");
	fflush(stdin);
	scanf("%f", &nota4);
	
	media = (nota1+nota2+nota3+nota4)/4;
	printf("\nMedia: %.2f ", media);
	
	if (media >=7 )
	{
		printf("\nPassou!");
	}
	
	if (media <7 && media >=4)
	{
		printf("\nExame final!");
		printf("\nEntre com a nota do Exame final: ");
		fflush(stdin);
		scanf("%f", &notaEx);
		
		if(notaEx >= 7)
		{
			printf("Passou!");
		}
		else
		{
			printf("Reprovou!");
		}
	}
	
	if (media < 4)
	{
		printf("\nReprovou!");
	}
	
	printf("\n\n----Exercicio 6----");
	float salario;
	
	printf("\n\nEntre com seu salario: ");
	fflush(stdin);
	scanf("%f", &salario);
	
	//Classe E
	if(salario <= 1254)
	{
		printf("\nEsta na classe E.");
	}
	
	//Classe D
	if(salario >= 1255 && salario <= 2004)
	{
		printf("\nEsta na classe D.");
	}
	
	//Classe C
	if(salario >= 2005 && salario <= 8640)
	{
		printf("\nEsta na classe C.");
	}
	
	//Classe B
	if(salario >= 8641 && salario <= 11261)
	{
		printf("\nEsta na classe B.");
	}
	
	//Classe A
	if(salario >= 11262)
	{
		printf("\nEsta na classe A.");
	}
	
	printf("\n\n----Exercicio 7----");
	float peso, altura, IMC;
	
	printf("\n\nEntre com seu peso: ");
	fflush(stdin);
	scanf("%f", &peso);
	
	printf("Entre com sua altura: ");
	fflush(stdin);
	scanf("%f", &altura);
	
	IMC = peso/(altura*altura);
	printf("\nIMC: %.2f ", IMC);
	
	if(IMC < 18.5)
	{
		printf("\nMAGREZA - OBESIDADE GRAU 0");
	}
	
	if(IMC >= 18.5 && IMC <= 24.9)
	{
		printf("\nNORMAL - OBESIDADE GRAU 0");
	}
	
	if(IMC >= 25 && IMC <= 29.9)
	{
		printf("\nSOBREPESO - OBESIDADE GRAU I");
	}
	
	if(IMC >= 30 && IMC <= 39.9)
	{
		printf("\nOBESIDADE - OBESIDADE GRAU II");
	}
	
	if(IMC >= 40)
	{
		printf("\nOBESIDADE GRAVE - OBESIDADE GRAU III");
	}
	
}

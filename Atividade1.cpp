#include <stdio.h>
#include <math.h>

int main (void)
{
	/*
	int x;
	int y = 4;
	float salario = 3400.23;
	char sexo = 'M';
	
	printf("----Exemplo 1----");
	
	printf("\n\nDigite sua idade: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%d", &x);
	printf("A idade e:%d", x);
	
	printf("\n\nDigite um valor para y: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%d", &y);
	printf("Novo valor de y e:%d", y);
	
	printf("\n\nDigite o salario: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &salario);
	printf("O salario e:%0.2f", salario);
	
	printf("\n\nQual seu sexo?(M ou F): ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%c", &sexo);
	printf("O sexo e:%c", sexo);
	
	
	printf("\n\n----Exemplo 2----");
	
	float nota1, nota2, media;
	
	fflush(stdin);// linha para limpeza do buffer do teclado
	printf("\n\nEntre com a nota 1: ");
	scanf("%f", &nota1);
	
	fflush(stdin);// linha para limpeza do buffer do teclado
	printf("Entre com a nota 2: ");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2)/2;
	
	printf("\nA media e:%0.1f ", media);
	*/
	
	printf("----Exercicio 1----");
	float num1, num2;
	
	printf("\n\nEntre com o primeiro numero: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &num1);
	
	printf("Entre com o segundo numero: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &num2);
	
	float soma, sub;
	
	soma = num1+num2;
	sub = num1-num2;
	
	printf("\nA soma desses numeros e:%0.1f\nA subtracao desses numeros e:%0.1f", soma, sub);
	
	printf("\n\n----Exercicio 2----");
	float num3, num4;
	
	printf("\n\nEntre com o primeiro numero: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &num1);
	
	printf("Entre com o segundo numero: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &num2);	
	
	printf("Entre com o terceiro numero: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &num3);
	
	printf("Entre com o quarto numero: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &num4);
	
	float media;
	media = (num1+num2+num3+num4)/4;
	
	printf("A media dos numeros e:%0.1f ", media);
	
	printf("\n\n----Exercicio 3----");
	float lado1, lado2;
	
	printf("\n\nEntre com o valor do lado 1: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &lado1);
	
	printf("Entre com o valor do lado 2: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &lado2);
	
	float areaQ;
	areaQ = lado1*lado2;
	
	printf("A area do quadrado e:%0.1f ", areaQ);
	
	printf("\n\n----Exercicio 4----");
	float perimetro;
	perimetro = (lado1*2)+(lado2*2);
	
	printf("\n\nEntre com o valor do lado 1: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &lado1);
	
	printf("Entre com o valor do lado 2: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &lado2);
	
	printf("O perimetro e:%0.1f ", perimetro);
	
	printf("\n\n----Exercicio 5----");
	float areaT;
	
	printf("\n\nEntre com o valor do lado 1 (base): ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &lado1);
	
	printf("Entre com o valor do lado 2 (altura): ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &lado2);
	
	areaT = (lado1*lado2)/2;
	
	printf("A area do triangulo e:%0.1f ", areaT);
	
	printf("\n\n----Exercicio 6----");
	float lado3;
	float perimetroT;
	
	printf("\n\nEntre com o valor do lado 1 (cateto 1): ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &lado1);
	
	printf("Entre com o valor do lado 2 (cateto 2): ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &lado2);
	
	
	lado3 = sqrt(lado1*lado1 + lado2*lado2);
	perimetroT = lado1 + lado2 + lado3;
	
	printf("O perimetro do triangulo e:%0.1f ", perimetroT);
	
	printf("\n\n----Exercicio 7----");
	float raio;
	double pi = M_PI;
	float areaC;
	
	printf("\n\nEntre com o valor do raio: ");
	fflush(stdin);// linha para limpeza do buffer do teclado
	scanf("%f", &raio);
	
	areaC = pi*(raio*raio);
	printf("A area do circulo e:%0.1f ", areaC); 
	
}
	


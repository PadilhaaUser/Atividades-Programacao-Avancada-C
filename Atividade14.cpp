#include <stdio.h>
#include <string.h>

struct endereco
{
	char rua [50];
	int numero;
	char bairro [20];
	char cidade [30];
	char sigla_estado [3];
	long int CEP;
};
struct cadastro
{
	char nome [50];
	long int telefone;
	struct endereco residencial;
	struct endereco comercial;
};

main(void){

	struct cadastro ficha1;
	strcpy (ficha1.nome, "Paulo Henrique");
	ficha1.telefone = 999999999;
	strcpy (ficha1.residencial.rua,"Rua A");
	ficha1.residencial.numero = 9;
	strcpy (ficha1.residencial.bairro,"Xaxim");
	strcpy (ficha1.residencial.cidade,"Irati");
	strcpy (ficha1.residencial.sigla_estado,"PR");
	ficha1.residencial.CEP = 31340230;

	strcpy (ficha1.comercial.rua,"Rua F");
	ficha1.comercial.numero = 43;
	strcpy (ficha1.comercial.bairro,"Centro");
	strcpy (ficha1.comercial.cidade,"Curitiba");
	strcpy (ficha1.comercial.sigla_estado,"PR");
	ficha1.comercial.CEP = 31340000;

	printf("Nome: %s \nTelefone: %d \nEndereco residencial: %s, %s - %s/%s CEP %d\nEndereco comercial: %s, %s - %s/%s CEP %d", ficha1.nome, ficha1.telefone, ficha1.residencial.rua, ficha1.residencial.bairro, ficha1.residencial.cidade, ficha1.residencial.sigla_estado, ficha1.residencial.CEP, ficha1.comercial.rua, ficha1.comercial.bairro, ficha1.comercial.cidade, ficha1.comercial.sigla_estado, ficha1.comercial.CEP);

}


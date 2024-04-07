#include <stdio.h>
#include <string.h>

typedef struct {
    char rua[50];
    int numero;
} ENDERECO;

typedef struct {
    char nome[50];
    ENDERECO endereco_comercial;
    ENDERECO endereco_residencial;
} CADASTRO;

int main() {
    CADASTRO cadastro[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("Nome %d: ", i+1);
        fgets(cadastro[i].nome, 50, stdin);
        cadastro[i].nome[strcspn(cadastro[i].nome, "\n")] = 0; // Remove o '\n'
        
		printf("\n");
		
        printf("Rua do endereco comercial: ");
        fgets(cadastro[i].endereco_comercial.rua, 50, stdin);
        cadastro[i].endereco_comercial.rua[strcspn(cadastro[i].endereco_comercial.rua, "\n")] = 0; 
        printf("Numero do endereco comercial: ");
        scanf("%d", &cadastro[i].endereco_comercial.numero);
        getchar(); // Para consumir o '\n' deixado por scanf

		printf("\n");

        printf("Rua do endereco residencial: ");
        fgets(cadastro[i].endereco_residencial.rua, 50, stdin);
        cadastro[i].endereco_residencial.rua[strcspn(cadastro[i].endereco_residencial.rua, "\n")] = 0; 
        printf("Numero do endereco residencial: ");
        scanf("%d", &cadastro[i].endereco_residencial.numero);
        getchar(); 
        
        printf("\n");
    }

    // Impressão dos dados
    for(i = 0; i < 5; i++) {
        printf("\nCadastro %d\n", i+1);
        
        printf("\n");
        
        printf("Nome: %s\n", cadastro[i].nome);
        printf("Endereco comercial: Rua %s, %d\n", cadastro[i].endereco_comercial.rua, cadastro[i].endereco_comercial.numero);
        printf("Endereco residencial: Rua %s, %d\n", cadastro[i].endereco_residencial.rua, cadastro[i].endereco_residencial.numero);
    }

    return 0;
}

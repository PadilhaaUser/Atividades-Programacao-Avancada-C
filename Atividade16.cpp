#include <stdio.h>
#include <string.h>

// Definição da struct CORRESPONDECIA
struct CORRESPONDECIA {
    char CEP[20];
    char rua[100];
    int numero;
    char bairro[50];
    char cidade[50];
    char estado[3];
};

int main() {
    // Declaração das structs A e B
    struct CORRESPONDECIA A, B;

    // Preenchendo os dados da struct A
    printf("Digite o CEP da correspondencia A: ");
    scanf("%s", A.CEP);
    printf("Digite a rua da correspondencia A: ");
    scanf(" %[^\n]s", A.rua); // Usado %[^\n]s para permitir espaços em branco na entrada
    printf("Digite o numero da correspondencia A: ");
    scanf("%d", &A.numero);
    printf("Digite o bairro da correspondencia A: ");
    scanf(" %[^\n]s", A.bairro);
    printf("Digite a cidade da correspondencia A: ");
    scanf(" %[^\n]s", A.cidade);
    printf("Digite o estado da correspondencia A: ");
    scanf("%s", A.estado);

    // Copiando os dados da struct A para a struct B
    strcpy(B.CEP, A.CEP);
    strcpy(B.rua, A.rua);
    B.numero = A.numero;
    strcpy(B.bairro, A.bairro);
    strcpy(B.cidade, A.cidade);
    strcpy(B.estado, A.estado);

    // Imprimindo os dados da struct B
    printf("\nDados da correspondencia B:\n");
    printf("CEP: %s\n", B.CEP);
    printf("Rua: %s\n", B.rua);
    printf("Numero: %d\n", B.numero);
    printf("Bairro: %s\n", B.bairro);
    printf("Cidade: %s\n", B.cidade);
    printf("Estado: %s\n", B.estado);

    return 0;
}


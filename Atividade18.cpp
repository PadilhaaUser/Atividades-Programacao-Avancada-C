#include <stdio.h>
#include <string.h>

#define MAX_FUNCIONARIOS 5
#define MAX_NOME 50
#define MAX_CARGO 50
#define MAX_TELEFONE 15
#define MAX_EMAIL 50

// Definicao da struct FUNCIONARIO
struct FUNCIONARIO {
    char nome[MAX_NOME];
    char cargo[MAX_CARGO];
    char telefone[MAX_TELEFONE];
    char email[MAX_EMAIL];
    float salario;
};

int main() {
    // Declaracao do vetor de structs FUNCIONARIO
    struct FUNCIONARIO funcionarios[MAX_FUNCIONARIOS];

    // Variaveis auxiliares
    float total_salarios = 0;
    int indice_maior_salario = 0;
    int telefone_em_branco = 0;

    // Preenchimento dos dados dos funcionarios
    for (int i = 0; i < MAX_FUNCIONARIOS; i++) {
        printf("Cadastro do funcionario %d\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]s", funcionarios[i].nome); // %[^\n]s para permitir espaços em branco na entrada
        printf("Cargo: ");
        scanf(" %[^\n]s", funcionarios[i].cargo);
        printf("Telefone (digite 0 se nao tiver): ");
        scanf(" %d", funcionarios[i].telefone);
        printf("E-mail: ");
        scanf(" %[^\n]s", funcionarios[i].email);
        printf("Salario: ");
        scanf("%f", &funcionarios[i].salario);
        printf("\n");
        total_salarios += funcionarios[i].salario;

        // Verificando se o número de telefone esta em branco
        if (strlen(funcionarios[i].telefone) == 0) {
            telefone_em_branco = 1;
        }

        // Verificando qual funcionário tem o maior salário
        if (funcionarios[i].salario > funcionarios[indice_maior_salario].salario) {
            indice_maior_salario = i;
        }
    }

    // Imprimindo o total dos salários
    printf("\nTotal dos salarios de todos os funcionarios: %.2f\n", total_salarios);

    // Imprimindo o funcionário com o maior salário
    printf("Funcionario com o maior salario:\n");
    printf("Nome: %s\n", funcionarios[indice_maior_salario].nome);
    printf("Cargo: %s\n", funcionarios[indice_maior_salario].cargo);
    printf("Telefone: %d\n", funcionarios[indice_maior_salario].telefone);
    printf("E-mail: %s\n", funcionarios[indice_maior_salario].email);
    printf("Salario: %.2f\n", funcionarios[indice_maior_salario].salario);

    // Verificando se algum funcionário está com o número de telefone em branco
    if (telefone_em_branco) {
        printf("\nPelo menos um funcionario possui numero de telefone em branco.\n");
    } else {
        printf("\nNenhum funcionario possui numero de telefone em branco.\n");
    }

    return 0;
}


#include <stdio.h>

// Definindo a struct Aluno
typedef struct {
    char nome[100];
    int matricula;
    float nota;
} Aluno;

// Função para cadastrar um aluno
void cadastrarAluno(Aluno *a) {
    printf("Digite o nome do aluno: ");
    scanf("%s", a->nome);
    printf("Digite a matricula do aluno: ");
    scanf("%d", &a->matricula);
    printf("Digite a nota do aluno: ");
    scanf("%f", &a->nota);
}

int main() {
    Aluno a;
    
    // Cadastrando o aluno
    cadastrarAluno(&a);
    
    // Imprimindo os dados do aluno
    printf("Dados do aluno:\n");
    printf("Nome: %s\n", a.nome);
    printf("Matricula: %d\n", a.matricula);
    printf("Nota: %.2f\n", a.nota);
    
    return 0;
}


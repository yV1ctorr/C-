#include <stdio.h>
#include <string.h>

typedef struct{
    int idade;
    char nome[10];
}Teste;
 
int main() {
    Teste teste1;
    Teste *ptr = &teste1;

    // pedindo os primeiros valores
    printf("digite uma idade: \n");
    scanf("%d", &teste1.idade);
    fflush(stdin);
    printf("digite um nome: \n");
    scanf("%s", &teste1.nome);
    fflush(stdin);
    // exibindo os primeiros valores
    printf("Idade 1: %d \n", teste1.idade);
    printf("Nome 1: %s \n", teste1.nome);
    // pedindo novos valores para alterar os primeiros
    printf("digite uma nova idade: \n");
    scanf("%d", ptr->idade);
    fflush(stdin);
    printf("digite um novo nome: \n");
    scanf("%s", ptr->nome);
    strcpy(ptr->nome, teste1.nome);
    fflush(stdin);

    printf("Idade 2: %d \n", teste1.idade);
    printf("Nome 2: %s \n", teste1.nome);


    return 0;
}
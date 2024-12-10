#include <stdio.h>
#include <string.h>
// declaração de struct
struct pessoa{
    char nome[20];
    int idade;
    float altura;
};
// redefine a struct("pessoa") para "Pessoa" 
typedef struct pessoa Pessoa;

int  main() {    
    // criando variavel dentro da struct
    Pessoa pessoa1;
    // atribuindo valores aos campos
    printf("Inicio\n");
    printf("Nome:%s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Altura: %.2f/n", pessoa1.altura);

    // usuario atribuindo valores
    printf("Digite seu nome:\n");
    scanf("%19[^\n]s", pessoa1.nome);
    fflush(stdin);
    printf("DIgite a sua idade:\n");
    scanf("%d", &pessoa1.idade);
    printf("Digite a sua altura:\n");
    scanf("%f", &pessoa1.altura);

    printf("PESSOA 1 \n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %i\n", pessoa1.idade);
    printf("Altura:%.2f\n", pessoa1.altura);


    return 0;
}
#include <stdio.h>
#include <string.h>

// declaração de struct
struct pessoa{
    char nome[30];
    int idade;
    float altura;
};

// redefine a struct("pessoa") para "Pessoa" 
typedef struct pessoa Pessoa;

int  main() {

    // criando um vetor dentro da struct
    int i;
    int tam = 3;
    Pessoa lista[3];

    // atribuindo valores no vetor
    for (i = 0; i < 3; i++){
        printf("Insira dados (%d):\n", i+1);
        printf("Nome: \n");
        scanf("%30[^\n]s", &lista[i].nome);
        fflush(stdin);

        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        puts("Altura: ");
        scanf("%f", &lista[i].altura);
        fflush(stdin);
    }
    for (i = 0; i < tam; i++){
        for (tam = 0; tam < 3; tam++){
            printf("Nome: %s\n", lista[i].nome);
            printf("Idade: %d\n", lista[i].idade);
            printf("Altura: %f\n", lista[i].altura);
        }
    }
    

    return 0;
}
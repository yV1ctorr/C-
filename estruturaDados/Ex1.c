#include <stdio.h>
#include <stdlib.h> 
#define MAX 3

typedef struct {
    char nome[20];
} s_conjuge;

typedef struct{
    char nome[20];
    int fone;
    s_conjuge conjuge;
} s_cliente;

int main(void) {
    s_cliente cliente[MAX];
    int i;
    for(i=0; i<MAX; i++){
        printf("Ficha : %d\n",i+1);
        printf("Nome : ");
        scanf(" %20[^\n]", &cliente[i].nome);
        printf("Fone : ");
        scanf(" %d", &cliente[i].fone);
        printf("conjuge: ");
        scanf(" %20[^\n]", &cliente[i].conjuge.nome);
        system("cls");
    }
    for(i=0; i<MAX; i++){
        printf("Ficha : %d\n",i+1);
        printf("----------------------------------------\n");
        printf("Nome : %s\n",cliente[i].nome);
        printf("Fone : %d\n",cliente[i].fone);
        printf("Conjuge: %s\n",cliente[i].conjuge.nome);
        printf("----------------------------------------\n");
    }
    system("pause");
    return 0;
}



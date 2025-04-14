#include <stdio.h>
#include <stdlib.h>
#define MAX 3

int dado[MAX], qtd=0, op=0, i=0; //qtd = Quant. de elementos inseridos

int inserir(void) {//PUSH

    if (qtd == MAX)
        printf("A fila esta cheia!\n\n");
    else {
        printf("Digite o valor para entrar na fila: ");
        scanf("%d",&dado[qtd]);
        printf("\n%d armazenado em %d\n\n", dado[qtd], qtd);
        qtd++;
        getchar();
    }
    return 0;
}

int remover(void) {//POP
    if (qtd == 0)
        printf("A fila esta vazia\n\n");
    else {
        qtd--;
        printf("Elemento %d removido\n", dado[0]);
        for (i=0; i<qtd; i++)
        dado[i] = dado[i+1];
        dado[i] = 0;
    }
    return 0;
}

int exibir(void) {
    if (qtd == 0)
        printf("A fila esta vazia!\n\n");
    else
        for (i=0; i<qtd; i++)
        printf("Posicao %d --> %d\n\n", i, dado[i]);
    getchar();
    return 0;
}

int menu(void) {
    system("cls");
    printf("======================\n");
    printf(" FILA \n");
    printf("======================\n");
    printf(" 1 - Inserir \n");
    printf(" 2 - Remover \n");
    printf(" 3 - Exibir \n");
    printf(" 4 - sair \n");
    printf("======================\n");
    printf("Selecione sua opcao: ");
    scanf("%d", &op);
    system("cls");

    switch (op) {
        case 1 : inserir();
        break;
        case 2 : remover();
        break;
        case 3 : exibir();
        break;
    }
    return 0;
}

int main(void) {
    while (op != 4) {
        menu();
        system("pause");
    } 
}
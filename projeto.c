#include <stdio.h>
#include <string.h>
int main() {
    char nome[10], sobrenome[10];
    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);
    printf("Nome: %s\n", nome);
    printf("Sobrenome: %s\n", sobrenome);

    //Concatenação das strings
    strcat(nome, " ");
    strcat(nome, sobrenome);
    printf("Nome completo: %s\n", nome);
    
    //Comprimento da concatenação
    int tamanho = strlen(nome);
    printf("O tamanho e: %d\n", tamanho);

    return 0;
}
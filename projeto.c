#include <stdio.h>
#include <string.h>
int main() {
    char nome[10], sobrenome[10];
    printf("Digite seu primeiro nome: ");
    scanf("%s", nome);
    printf("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    //Função string: copiar o valor de uma string para a outra
    strcpy(sobrenome, nome);
    printf("%s\n", sobrenome);

    return 0;
}
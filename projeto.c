#include <stdio.h>
#include <string.h>
typedef struct Remedio{
    char nome[20];
    int quantidade;
    float valor;
};

int main() {
    struct Remedio remedio1;
    strcpy(remedio1.nome, "dorflex");
    remedio1.quantidade = 10;
    remedio1.valor = 2.50;
    return 0;
}
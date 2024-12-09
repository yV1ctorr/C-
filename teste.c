#include <stdio.h>
#include <string.h>
int  main() {
    char s[10];
    printf("Digite algo (scanf tradicional): \n");
    scanf("%s", s);
    // limpar o buffer
    fflush(stdin);

    printf("resultado: %s\n", s);
    // entrada: lendo os espaços e respeitando o tamanho da string
    printf("Digite algo (scanf aprimorado):\n");
    scanf("%9[^\n]s", s);
    fflush(stdin);
    printf("resultado: %s\n", s);

    
    return 0;
}
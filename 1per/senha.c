#include <stdio.h>
#include <string.h>

int main() {

  char senha[10] = "senha";
  char senhaInserida;
  
  printf("Digite sua senha: \n");
  scanf("[^\n]s", senhaInserida);
  strcmp(senha, senhaInserida);

  while (strcmp) {
    if(strcmp == 0){
      Printf("Bem vindo!");
    }  else{
         printf("Digite sua senha novamente!");
    }
  }
  return 0;
}
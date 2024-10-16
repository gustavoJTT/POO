#include <stdio.h>

int main(){
  char nome[100];

  printf("Digite seu nome competo:\n");
  scanf("%s", nome);
  printf("Bem-vindo a linguagem C, %s", nome[1]); //o erro está aqui, não sei como resolver

  return 0;
}
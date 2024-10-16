#include <stdio.h>

int main(){
  int idade;
  char nome[100];
  
  scanf("%d", &idade); //lembrar do & onde n é array
  scanf("%s", nome);
  printf("Bem-vindo a linguagem C, %s %d", nome, idade); //declarar o tipo da variável antes de printar

  return 0;
}
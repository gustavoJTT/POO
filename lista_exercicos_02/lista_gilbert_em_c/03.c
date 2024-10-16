#include <stdio.h>

int main(){
  int n1, n2, p1, p2, media;

  printf("Digite sua primeira nota do bimestre:\n");
  scanf("%d", &n1);
  p1=2;
  printf("Digite sua segunda nota do bimestre:\n");
  scanf("%d", &n2);
  p2=3;

  media = ((n1*p1)+(n2*p2))/(p1+p2);
  
  printf("Media parcial = %d", media);

  return 0;
}
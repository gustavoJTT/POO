#include <stdio.h>
#include <math.h>

int main(){
  float b, h, area, perim, diag;

  printf("Digite a base e a altura do retangulo:\n");
  scanf("%f", &b);
  scanf("%f", &h);

  area = b*h;
  perim=(b*2)+(h*2);
  diag=sqrt((b*b)+(h*h));

  printf("Area = %.2f - Perimetro = %.2f - Diagonal = %.2f", area, perim, diag);

  return 0;
}
/*
quantos custa viajar de carro?
*/
#include <stdio.h>

int main() {
  int gasto, velo; 
  double combu;

  scanf("%d %d", &gasto, &velo);
  
  combu = ( gasto * velo) / 12.0;  //equação
  printf("%.3lf\n", combu); // três dígitos após o ponto decimal

  return 0;
}

#include <stdio.h>

int main() 
{
  int objeto1, objeto2, quantidade1, quantidade2; // montante
  double valor1, valor2, total; //valores

  scanf("%d %d %lf", &objeto1, &quantidade1, &valor1); //linha 1

  scanf("%d %d %lf", &objeto2, &quantidade2, &valor2); //linha 2

  total = (valor1 * quantidade1) + (valor2 * quantidade2); //equação

  printf("VALOR A PAGAR: R$ %.2lf\n", total); //precisão dupla

  return 0;
}

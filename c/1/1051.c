/*
Como não sonegar imposto 
*/

#include <stdio.h>

int main() 
{
  float salario;
  scanf("%f", &salario);
//faixas 
  if (salario <= 2000) 
  {
    printf("Isento\n");
  } 
  else if (salario <= 3000) 
  {
    printf("R$ %.2f\n", (salario - 2000) * 0.08);
  } 
  else if (salario < 4500) 
  {
    printf("R$ %.2f\n", (salario - 3000) * 0.18 + (1000 * 0.08));
  } 
  else 
  {
    printf("R$ %.2f\n", (salario - 4500) * 0.28 + (1500 * 0.18) + (1000 * 0.08));
  }
//triangulo
  return 0;
}

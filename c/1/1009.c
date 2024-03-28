/*
salário
*/
#include <stdio.h> //interação entre usuário e máquina 

int main() 
{
  char id[1009]; // primeiro nome aparantemente preicsa de um número qualquer no char
  double fixo, vendas, total;

  scanf("%s", id); // primeiro nome
  scanf("%lf", &fixo); // fixo
  scanf("%lf", &vendas); // vendido
/* 
funciona assim também:
scanf("%s %lf %lf", id, &fixo, &vendas); // primeiro nome, fixo e o vendido
*/
  total = fixo +  (vendas * 0.15); // equação

  printf("TOTAL = R$ %.2lf\n", total); // dupla precisão

  return 0;
}

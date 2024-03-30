/*
dias para anos, meses e dias
*/
#include <stdio.h>

int main() 
{
  int tt, aa, mm, rr;

  scanf("%d", &tt); //dias
  aa = tt / 365; //anos
  rr = tt % 365; //arte mais importante da equação; ela evita que existam meses maiores que 12
  mm = rr / 30;
  rr %= 30; //dias restantes 
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", aa, mm, rr); //fim da matemática mirabolante 

  return 0;
}

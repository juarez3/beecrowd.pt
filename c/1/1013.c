/*
??não saquei a fórmula 
*/
#include <stdio.h>

int main() {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c); 

  if (a >= b && a >= c)             //primeiro número é o maior
  {printf("%d eh o maior\n", a);} 
  else if (b >= a && b >= c)       //segundo número é o maior
  {printf("%d eh o maior\n", b);} 
  else                             //terceiro número é o maior
  {printf("%d eh o maior\n", c);}

  return 0;
}

/*
calcula o valor da área de um círculo com base no raio
*/

#include <stdio.h> // como o <math.h> não calcula o valor de pi, teremos que defini-lo como constante
int main() 
{
  double r, A; //precisão dupla
  const double pi = 3.14159; //valor de pi

  scanf("%lf", &R);
  A = pi * r * r; 
  printf("A=%.4lf\n", A); //4 casas de precisão

  return 0;
}

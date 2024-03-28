/*
problema de álgebra 
*/
#include <stdio.h>
#include <math.h> //usar o pow(eleva a um número) e o sqrt(raiz quadrada)
int main() {
  double x1, y1, x2, y2, distance;

 
  scanf("%lf %lf", &x1, &y1);

 
  scanf("%lf %lf", &x2, &y2);


  distance = sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0)); //fórmula 

  printf("%.4lf\n", distance);

  return 0;
}

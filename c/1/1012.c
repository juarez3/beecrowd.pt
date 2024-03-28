/* 
áreas com valores possíveis 
*/
// o #include <cstdio> funciona apenas no cpp
#include <stdio.h>
int main() 
{
  double A, B, C;
  scanf("%lf %lf %lf", &A, &B, &C);
//agilizar o processo fazendo as equações dentro da declaração de variáveis 
  double triangleArea = 0.5 * A * C; 
  double circleArea = 3.14159 * C * C;
  double trapezoidArea = 0.5 * (A + B) * C; 
  double quadrad = B * B;
  double retangeArea = A * B;
  
  printf("TRIANGULO: %.3lf\n", triangleArea);
  printf("CIRCULO: %.3lf\n", circleArea);
  printf("TRAPEZIO: %.3lf\n", trapezoidArea);
  printf("QUADRADO: %.3lf\n", quadrad);
  printf("RETANGULO: %.3lf\n", retangeArea);
  
  return 0;
}

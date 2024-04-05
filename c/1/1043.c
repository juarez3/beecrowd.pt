/*
é triangulo?
qual o perímetro do moço de 3 lados?
e a area do não trapezoide?
*/
#include <stdio.h>

int main() 
{
  double A, B, C, Perimetro , Area;

  scanf("%lf %lf %lf", &A, &B, &C);


  if (A + B <= C || A + C <= B || B + C <= A) 
  {
    Area  = ((B + A) / 2) * C; //formula do trapézio: A=((a+b)/2)*h
    printf("Area = %.1lf\n", Area);
      
  }
        else 
        {
        Perimetro  = A + B + C; //soma dos lados 
        printf("Perimetro = %.1lf\n", Perimetro);
        }
  return 0;
}

/*
cuidado com a indentação e as chaves (deixar organizado e funcinal)
fórumla da matemática 
grande senhor Bhaskara
*/
#include <stdio.h>
#include <math.h>

int main() 
{
double a, b, c;
double delta, r1, r2;
scanf("%lf %lf %lf", &a, &b, &c);

delta = pow(b, 2) - 4 * a * c; //o pow funciona assim pow(base, elevadoA)

    if (delta >= 0 && a != 0){  //condicional para as respostas serem calculáveis 
        r1 = (-b + sqrt(delta)) / (2 * a);
        r2 = (-b - sqrt(delta)) / (2 * a);
    
        printf("R1 = %.5lf\n", r1); //5 casas depois da vírgula 
        printf("R2 = %.5lf\n", r2);
}
    else //outros casos....
{
        printf("Impossivel calcular\n");
}
  return 0;
}

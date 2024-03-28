/*
quanto sua cg faz por litro?
*/

#include <stdio.h>

int main() 
{
  int distan; //km rodados 
  double combu, max; //tanque gasto

  scanf("%d %lf", &distan, &combu); //lendo ...

    max = distan / combu; //equação
    printf("%.3lf km/l\n", max); //3 casas de precisão 
  

  return 0; //fim
}

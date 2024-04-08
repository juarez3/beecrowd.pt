/*
em ordem qualquer
*/
#include <stdio.h>

int main() 
{
  int a, b;

  scanf("%d %d", &a, &b);

    if (b%a==0 || a%b==0) //condição bilateral* para um número ser divisivel por outro (multiplos)
{
    printf("Sao Multiplos\n"); 
    
} 
 
    else 
{
    printf("Nao sao Multiplos\n");
}

  return 0;
}

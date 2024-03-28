/*
soma de dois números
*/
#include <stdio.h>

int main() 
{
  int numero1, numero2, soma; //declarar as variáveis antes

  scanf("%d %d", &numero1, &numero2); //computador espera números inteiros do usuário 

  soma = numero1 + numero2; //equação de soma
  printf("X = %d\n", soma); 

  return 0;
}

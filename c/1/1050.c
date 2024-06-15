/*
como usar switch
*/
#include <stdio.h>

int main() 
{
  int ddd, cidade;
  scanf("%d", &ddd);

  switch (ddd) //Trocar os casos de DDD
  {
    case 61:
       printf("Brasilia\n"); // Brasília
      break;
    case 71:
       printf("Salvador\n"); // Salvador
      break;
    case 11:
       printf("Sao Paulo\n"); // São Paulo
      break;
    case 21:
       printf("Rio de Janeiro\n"); // Rio de Janeiro
      break;
    case 32:
       printf("Juiz de Fora\n"); // Juiz de Fora
      break;
    case 19:
       printf("Campinas\n"); // Campinas
      break;
    case 27:
       printf("Vitoria\n"); // Vitória
      break;
    case 31:
       printf("Belo Horizonte\n"); // Belo Horizonte
      break;
    default:
       printf("DDD nao cadastrado\n"); // DDD não cadastrado
      break;
  }


  return 0;
}

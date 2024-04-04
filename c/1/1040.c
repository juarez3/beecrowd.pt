/*
calma lá prof. 
nem fiz a prova ainda
*/

#include <stdio.h>

int main() 
{
  double n1, n2, n3, n4, media, exame, mediaFinal; //ponto flutuante longo

  scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

  // equação
  media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
  printf("Media: %.1lf\n", media);

 
  if (media >= 7.0) //aprovado
  {
    printf("Aluno aprovado.\n");
  } else if (media < 5.0) { //reprovado
    printf("Aluno reprovado.\n");
  } else { //ainda em não fez a prova
    printf("Aluno em exame.\n");
    scanf("%lf", &exame); 
    printf("Nota do exame: %.1lf\n", exame);

  
    mediaFinal = (media + exame) / 2;

    //caso separado do else, mas só abre se o mesmo for concluido 
    if (mediaFinal >= 5.0) {
      printf("Aluno aprovado.\n");
    } else {
      printf("Aluno reprovado.\n");
    }

    printf("Media final: %.1lf\n", mediaFinal);
  }

  return 0;
}

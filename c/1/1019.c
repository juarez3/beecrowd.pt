/*
conversor de tempo
*/
#include <stdio.h>

int main() 
{
  int tt, hh, mm, ss;

  scanf("%d", &tt); //tempo em segundos
  hh = tt / 3600; // quantas horas completas cabem no tempo
  mm = tt / 60; // quantos minutos completos cabem no tempo restante
  ss = tt % 60; // resto do tempo em segundos após remover os minutos
  printf("%0d:%0d:%0d\n", hh, mm, ss); //finaliza com um 0 por padrão

  return 0;
}

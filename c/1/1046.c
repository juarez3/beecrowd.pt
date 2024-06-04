#include <stdio.h>
 
int main() {
 
int ti, tf;
scanf("%d%d",&ti,&tf); //horas 

if (ti==tf)
{
    printf("O JOGO DUROU 24 HORA(S)\n"); //o dia todo
}    
else if(ti>=12&&tf<12) //tempoInicial>tempoFinal
{
    printf("O JOGO DUROU %d HORA(S)\n",tf+24-ti); 
}
else //tempoInicial<tempoFinal
{
    printf("O JOGO DUROU %d HORA(S)\n",tf-ti);
}
    return 0;
}

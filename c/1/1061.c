#include <stdio.h>
 
int main() {
 
int dia1,dia2,hora1,hora2,minuto1,minuto2,segundo1,segundo2;
int seg,min,h,d;
scanf("Dia %d %d : %d : %d  Dia %d %d : %d : %d",&dia1,&hora1,&minuto1,&segundo1,&dia2,&hora2,&minuto2,&segundo2);

  //aux's
seg=-segundo1+segundo2;
min=-minuto1+minuto2;
h=-hora1+hora2;
d=-dia1+dia2;

  //caso o tempo inicial seja maior que o final
if(seg < 0) 
    {
        seg += 60;
        min--;
    }

if(min < 0)
    {
        min += 60;
        h--;
    }

if(h < 0){
        h += 24;
        d--;
    }
  //resposta final apos os ajustes de tempo
printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d,h,min,seg);
    return 0;
}

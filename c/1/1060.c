/*
somar valores positivos
*/
#include <stdio.h>

int main() {
int n1,n2,n3,n4,n5,n6;
int aux; //para armazenar os valores positivos
scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6); 

if (n1>0) //caso base
{
    aux+=1;
}
if (n2>0) //copias...
{
    aux+=1;
}
if (n3>0)
{
    aux+=1;
}
if (n4>0)
{
    aux+=1;
}
if (n5>0)
{
    aux+=1;
}
if (n6>0)
{
    aux+=1;
}
  printf("%d valores positivos\n", aux); //fim

  return 0;
}

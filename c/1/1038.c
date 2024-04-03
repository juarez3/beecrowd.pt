/*
contas para a lanchonete bomba
sequêcia de condicionais 
*/
include <stdio.h>

int main() 
{
double cq, xs, xb, ts, rr;
double iten, quantidade, aux; //variável auxiliar 
scanf("%lf %lf", &iten, &quantidade);

if (iten == 1) //cachorro quente
{
    aux = quantidade * 4.00;
    
    printf("Total: R$ %.2lf\n", aux);

}
else if (iten ==2) //cheese-salada
{
    aux = quantidade * 4.50;
    
    printf("Total: R$ %.2lf\n", aux);
}
else if (iten ==3) //cheese-bacon
{
    aux = quantidade * 5.00;
    
    printf("Total: R$ %.2lf\n", aux);
}
else if (iten ==4) //torrada simples 
{
    aux = quantidade * 2.00;
    
    printf("Total: R$ %.2lf\n", aux);
}
else if (iten ==5) //refri 
{
    aux = quantidade * 1.50;
    
    printf("Total: R$ %.2lf\n", aux);
}
  return 0;
}

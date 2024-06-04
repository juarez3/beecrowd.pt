#include <stdio.h>
 
int main() {
 float salarioAntes, salarioNovo, reajuste, porcem;
 scanf("%f", &salarioAntes);


//exercício resolvido sme o uso de repetição
if (salarioAntes>=0&&400>=salarioAntes){ //faixa salarial
    porcem = 15; //aumento
    reajuste = salarioAntes*(porcem/100); //evitar erros
    salarioNovo = salarioAntes + reajuste; //auxiliar
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.f %\n", salarioNovo, reajuste, porcem); //2 pontos flutantes, para a apresentação
}


// repetiçoes bracais
if(salarioAntes>=400.01&&800>=salarioAntes){
    porcem = 12;
    reajuste = salarioAntes*(porcem/100);
    salarioNovo = salarioAntes + reajuste;
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.f %\n", salarioNovo, reajuste, porcem);
}

if(salarioAntes>=800.01&&1200>=salarioAntes){
    porcem = 10;
    reajuste = salarioAntes*(porcem/100);
    salarioNovo = salarioAntes + reajuste;
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.f %\n", salarioNovo, reajuste, porcem);
}

if(salarioAntes>=1200.01&&2000>=salarioAntes){
    porcem = 7;
    reajuste = salarioAntes*(porcem/100);
    salarioNovo = salarioAntes + reajuste;
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.f %\n", salarioNovo, reajuste, porcem);
}   
if(2000.01<salarioAntes){
    porcem = 4;
    reajuste = salarioAntes*(porcem/100);
    salarioNovo = salarioAntes + reajuste;
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.f %\n", salarioNovo, reajuste, porcem);
}
    return 0;
}

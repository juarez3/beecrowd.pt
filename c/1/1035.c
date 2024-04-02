/* 
B > C {B maior do que C}
D > A {D  maior do que A}
(C + D) > (A + B) { a soma de C com D é maior que a soma de A e B e se C e D}
C > 0 {C positivo}
D > 0 {D positivo}
A % 2 == 0 {teste do par}
*/
#include <stdio.h>
 
int main() 
{
 int A, B, C, D;
 
 scanf("%d %d %d %d",&A, &B, &C, &D);
 
 if (B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0) 
    printf("Valores aceitos\n"); 
else 
    printf("Valores nao aceitos\n");

    return 0;
}

/*
quem é esse triangulo??
*/

#include <stdio.h>
 
int main() {
 
float a,b,c;
scanf("%f%f%f",&a,&b,&c); //lados

float A, B, C;
if(a<0||b<0||c<0) //comprimento negativo
{
        return 0;
}
// ordem crescente
if(a>=b&&a>=c)
{
        A=a;
        B=b;
        C=c;
}
else if(b>a&&b>=c){
        A=b;
        B=a;
        C=c;
}
else if(c>a&&c>b)
{
        A=c;
        B=a;
        C=b;
}

if(A >= B+C)
{
    printf("NAO FORMA TRIANGULO\n");
}

else if (A*A == B*B + C*C)
{
    printf("TRIANGULO RETANGULO\n");
}
else if (A*A > B*B + C*C)
{
    printf("TRIANGULO OBTUSANGULO\n");
    if ((A == B || A == C || B == C) && (A !=B ||B != C||C != A))
{
    printf("TRIANGULO ISOSCELES\n");
}
}


else if (A*A < B*B + C*C)
{
    printf("TRIANGULO ACUTANGULO\n");

    if (A == B && B == C)
{
    printf("TRIANGULO EQUILATERO\n");
}
    if ((A == B || A == C || B == C) && (A !=B ||B != C||C != A))
{
    printf("TRIANGULO ISOSCELES\n"); //sim, tem duas condições para ele ser isosceles ...
}
}
 
    return 0;
}

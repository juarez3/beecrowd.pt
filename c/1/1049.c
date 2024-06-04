/*
aula de zoologia
*/

#include <stdio.h>
#include <string.h> // comparar strings
 
int main() {
 
char palavra1[20], palavra2[20], palavra3[20];
scanf("%s", palavra1);
scanf("%s", palavra2);
scanf("%s", palavra3);
// o primeiro argumento é variável, enquanto o segundo permanece constante    
if (strcmp(palavra1,"vertebrado") == 0) // "== 0" significa que a string é a mesma; "!=0" significa que a string é diferente
{
    if (strcmp(palavra2,"ave") == 0) 
        if (strcmp(palavra3,"carnivoro") == 0) 
            printf("aguia\n");
        else
            printf("pomba\n");
    else
        if (strcmp(palavra3,"onivoro") == 0) 
            printf("homem\n");
        else
            printf("vaca\n");
}                
else
{
    if (strcmp(palavra2,"inseto") == 0)
        if (strcmp(palavra3,"hematofago") == 0) 
            printf("pulga\n");
        else
            printf("lagarta\n");
    else
        if (strcmp(palavra3,"hematofago") == 0) 
            printf("sanguessuga\n");
        else
            printf("minhoca\n");
}
    return 0;
}

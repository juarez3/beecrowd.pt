/*
definir onde o número está dentro de um intervalo 
testar condições 
*/
#include <stdio.h>

int main() {
    float ff;
    scanf("%f", &ff);

    if (ff >= 0 && ff <= 25.0) {
        printf("Intervalo [0,25]\n");
    } else if (ff > 25.0 && ff <= 50.0) { //os último número precisa do sinal de igual 
        printf("Intervalo (25,50]\n");
    } else if (ff > 50.0 && ff <= 75.0) {
        printf("Intervalo (50,75]\n");
    } else if (ff > 75.0 && ff <= 100.0) {
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n"); //números negativos ou maiores que 100
    }

    return 0;
}

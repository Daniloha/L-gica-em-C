#include <stdio.h>
#include <stdlib.h>

int main(){

    char Temp;
    double C, F;
    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%s", &Temp);

    switch(Temp){
    case('F'):
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &F);
        C = (F-32)*5/9;
        printf("Temperatura equivalente em Celsius: %.2lf", C);
    break;

    case('C'):
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &C);
        F = (C * 1.8) + 32;
        printf("Temperatura equivalente em Fahrenheit: %.2lf", F);
    break;

    }

    return 0;
}

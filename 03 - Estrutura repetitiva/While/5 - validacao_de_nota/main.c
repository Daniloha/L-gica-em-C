#include <stdio.h>
#include <stdlib.h>

int main(){

    double n1, n2, M;
    printf("Digite a primeira nota:");
    scanf("%lf", &n1);
  ;

    while(n1 < 0 || n1 > 10){
        printf("Valor invalido! Tente novamente: \n");
        scanf("%lf", &n1);
             }

    printf("Digite a segunda nota:");
    scanf("%lf", &n2);

    while(n2 < 0 || n2 > 10){
        printf("Valor invalido! Tente novamente: \n");
        scanf("%lf", &n2);
            }

    M = (n1 + n2)/2;
    printf("MEDIA = %.2lf", M);
      return 0;
}

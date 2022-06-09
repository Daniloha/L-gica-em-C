#include <stdio.h>
#include <stdlib.h>

int main(){
    double soma, x, i;
    x = 1;
    while(x > 0){
       printf("Digite as idades: ");
       scanf("%lf", &x);
       soma = soma + x;
       i++;
    }

    soma = soma - x;
    if(soma <= 0){
        printf("IMPOSSIVEL CALCULAR!");
    }
    else{
    printf("MEDIA = %.2lf", soma/(i-1));
    }
    return 0;
}

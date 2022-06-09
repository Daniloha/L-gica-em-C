#include <stdio.h>
#include <stdlib.h>

int main(){

    double x, y, z;

    scanf("%lf", &x);
    scanf("%lf", &y);
    scanf("%lf", &z);

    if(x < y){
        x = y;
    }
    else{
        if(x < z){
            x = z;
        }
    }
    printf("MAIOR DISTANCIA = %lf", x);
    return 0;
}

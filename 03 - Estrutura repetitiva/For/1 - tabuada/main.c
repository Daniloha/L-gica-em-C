#include <stdio.h>
#include <stdlib.h>

int main(){

    int X, i;

    printf("Deseja a tabuada para qual valor?");
    scanf("%d", &X);

    for(i = 1; i <= 10 ; i++){
        printf("%d X %d = %d\n", X , i , X*i);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){

    int h, min, seg, res;

    printf("Digite a duracao em segundos: ");
    scanf("%d", &seg);

    h = seg / 3600;
    res = seg % 3600;
    min = res / 60;
    res = seg % 60;

    printf("%d:%d:%d", h, min, res);

    return 0;
}

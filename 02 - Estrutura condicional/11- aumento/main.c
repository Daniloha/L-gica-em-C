#include <stdio.h>
#include <stdlib.h>

int main()
{   double salario, porc, aumento;
    int p;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if(salario <= 1000.00){
            p = 20;
            porc = (salario * p)/100;
                }
            else{
                 if(salario > 1000.00 && salario <= 3000.00){
                        p = 15;
            porc = (salario * p)/100;
                 }
            else{
                 if(salario > 3000.00 && salario <= 8000.00){
                     p = 10;
            porc = (salario * p)/100;
                 }
            else{
                p = 5;
            porc = (salario * p)/100;
            }
            }
            }

    aumento = salario + porc;

        printf("Novo salario = R$ %.2lf\n", aumento);
        printf("Aumento = R$ %.2lf\n", porc);
        printf("Porcentagem = %.2d %% ", p);
    return 0;
}

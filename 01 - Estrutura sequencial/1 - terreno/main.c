#include <stdio.h>
#include <stdlib.h>

int main()
{
   double L, C, V, A, P;

   printf("Digite a largura do terreno: ");
   scanf("%lf", &L);
   printf("Digite o comprimento do terreno: ");
   scanf("%lf", &C);
   printf("Digite o valor do metro quadrado: ");
   scanf("%lf", &V);

  A = L * C;
  P = A * V;

  printf("Area do terreno = %.2lf\n", A);
  printf("Preco do terreno = %.2lf\n", P);


  return 0;
}

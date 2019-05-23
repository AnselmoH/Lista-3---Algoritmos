//questao 11 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int i, x;
  int div = 0;

  do {
    printf("Informe o valor a ser analisado: \n");
    scanf("%d", &x);
  } while (x <= 0);

  for (i = 1; i <= x; i++) {
    if (x%i == 0){
     div++;
    }
  }

  if (div == 2)
    printf("O numero %d eh primo", x);

  else

    printf("O numero %d nao eh primo", x);

  return 0;
}

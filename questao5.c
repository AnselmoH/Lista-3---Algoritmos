//questao 05 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int fat, i, num;

printf ("Digite o numero para saber o valor fatorial: \n");
scanf ("%d", &num);

fat = num;

for (i=num-1; i > 0; i--){

fat = fat*i;
}

printf ("%d", +fat);

return 0;
}

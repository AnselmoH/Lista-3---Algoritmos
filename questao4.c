//questao 04

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
   int numero, i;

   printf("Informe o numero para verificar seus divisores: \n");
   scanf("%d", &numero);

   for (i = 1; i < numero+1; i++){
       if (numero%i==0){
           printf("Divisor: %d \n", i);
       }
   }
   return 0;
}

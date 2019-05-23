//questao 13 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int i, n, fib, fib1, fib2, soma;
    
    printf ("Digite a posicao n maxima da sequencia de Fibonacci: \n");
    scanf("%d", &n);
    
    fib2 = 0;
    fib1 = 1;
    fib = 0;
    soma = 0;
    
    for(i = 2; i <= n; i++){
        
        fib = fib1 + fib2;
        fib2 = fib1;
        fib1 = fib;
        
        soma += fib;
    }
    printf("\nA soma dos %d primeiros valores da serie de Fibonacci eh: %d \n\n", n, soma);
    
    return 0;
}

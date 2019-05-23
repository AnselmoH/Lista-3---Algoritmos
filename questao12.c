//questao 12

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int primos [13] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41};
    int dif;
    
    dif = primos[12] - primos[6];
    printf ("A diferenca entre o 6o e o 12o numero primo eh: %d\n\n", dif);
    
    return 0;
}

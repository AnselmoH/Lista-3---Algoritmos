//questao 01

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    
    int x, z;
    
    z = 0;
    
    for (x = 0; x <= 100; x++){
        if (x != 0){
            z = z + x;
        }
        printf ("Soma = %d \n", z);
    }
    
    return 0;
}

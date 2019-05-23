//questao 03

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    
    int x;
    
    for (x = 0; x < 100; x++){
        if (x%4 == 0){
            printf("Divisivel por 4: %d \n", x);
        }
    }
    
    return 0;
}

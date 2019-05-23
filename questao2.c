//questao 02

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){

    int x;

       for (x = 0; x <= 200; x++){
        if (x%7 == 0){
            printf("Multiplo de 7: %d \n", x);
        }
    }

    return 0;
}

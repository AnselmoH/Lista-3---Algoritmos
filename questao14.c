//questao 14 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int i;

    for (i= 1000; i <=1215; i++){

        if (i%11 == 5){
            printf ("Numero entre [1000, 1999], cujo resto=5 na divisao por 11: %d \n", i);
        }
    }
    return 0;
}

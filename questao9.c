//questao 09

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i, media, valor;

    valor = 0;

    for (i=13; i<=73; i++){
            if (i%2 ==0){
                    valor = valor+i;
            // como 73 e 13 sao impares, ao fazer 73 - 13, cujo resultado é 60, podemos dizer que metade disso é de pares e a outra é de ímpares.
                    media = valor/30;
            }
    }

    printf("A media aritmetica dos valores pares entre 13 e 73 e: %d \n", media);
    return 0;
}

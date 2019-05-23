//questao 20 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x, fator, mult;

    printf("Informe o valor a ser decomposto: \n");
    scanf("%d", &x);

    fator = 2;

    while (x > 1)
    {
        mult = 0;
        while (x%fator == 0)
        {
            mult ++;
            x = x / fator;
        }
        if (mult != 0)
        {
            printf("fator %d \n", fator);
        }
        fator++;
    }
    return 0;
}

//questao 10


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int fora, dentro, i, n;
    fora = 0;
    dentro = 0;

    for (i = 1; i <= 10; i++){

        printf ("Insira um valor: \n");
        scanf ("%d", &n);

        if ((n >=10) && (n <=50)){
            dentro = dentro+1;
        }

        else
            fora = fora+1;
    }
    printf ("Numeros dentro do intervalo: %d \n", dentro);
    printf ("Numeros fora do intervalo: %d \n", fora);

    return 0;
}

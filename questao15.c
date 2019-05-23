/questao 15 

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){

    char texto[100];
    int i, j, contador;
    char letra[] = "a";

    contador=0;
    printf ("Digite uma frase: ");
    gets(texto);

    for (i=0; i < strlen(texto); i++){
        for (j=0; j < strlen(letra); j++){
            if (texto[i] == letra[j]){

                contador++;
            }
        }
    }

    if (contador == 1){
        printf ("\n\nO texto informado possui 1 a\n\n");}

    else{
        printf ("\n\nO texto informado possui %d caracteres a\n\n", contador);}
    return 0;
}

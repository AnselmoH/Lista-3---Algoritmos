//questao 16 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char frase[100];
    int i, tam;
    
    printf("Informe uma frase: \n");
    gets(frase);
    
    tam = strlen(frase);
    
    printf("\nFrase invertida: \n");
    
    for (i = tam; i >= 0; i--){
        printf ("%c",frase[i]);
    }
    printf("\n");
    return 0;
}

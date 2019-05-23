//questao 23

#include <stdio.h>
#include <string.h>

int main(){
    
    char nome[50];
    
    int caractere;
    int palavra;
    int tam, x;
    
    printf("Insira o texto: \n");
    
    fgets(nome, 50, stdin);
    puts(nome);
    
    tam = strlen (nome);
    nome[tam-1] = 0;
    tam = strlen (nome);
    caractere = 0;
    
    for(x=0; x<tam; x++){
        if(nome[x] != ' '){
            caractere++;
        }
    }
    printf("O texto possui %d caracteres ",
           caractere);
    palavra = 1;
    
    for(x=0; x<tam; x++){
        if(nome[x] == ' ' &&
                nome[x-1] != ' '){
            palavra++;
        }
    }
    printf("e %d palavras. \n\n", palavra);
    return 0;
}

//questao 24

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>


int main()
{
    int x,tam;
    char nome[30];
    
    printf("Digite o texto: \n");
    gets(nome);
    
    tam = strlen(nome);
    
    printf("\nO texto de tras para frente eh: \n");
    
    for (x=tam-1; x >= 0; x--)
        printf("%c",nome[x]);
    
    printf("\n\n");
    
    return 0;

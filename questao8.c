//questao 08

#include <stdio.h>

int main(){
    int x, z, y;
    
    printf ("Digite um numero: \n");
    scanf ("%d", &y);
    
    for(x = 0; x <= 10; x++){
        
        z = y*x;
        printf (" %d x %d = %d \n", y, x, z);       
    }   
    return 0;
}

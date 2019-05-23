//questao 19

#include <stdio.h>
#include <stdlib.h>

int main(){

    srand (time(NULL));

    printf("%d ", rand()%21+30);
    printf("\n");

    return 0;
}

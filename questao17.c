//questao 17

#include <stdio.h>

int fahr(int celsius){
    int f;
    f = ((9*celsius) + 160)/5;
    return f;
}

int main (){
    int c, f;

    printf ("Digite a temperatura em graus Celsius: \n");
    scanf ("%d", &c);

    f = fahr(c);

    printf ("Fahrenheit = %d \n", f);

    return 0;
}

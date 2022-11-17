// Scrivere una funzione che inverte due variabili

#include <stdio.h>

int change(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
    return (a, b);
}

int main(){
    int x, y;
    x = 1;
    y = 2;
    x, y = change(x,y);
    printf("x = %d", x);
    printf("\ny = %d", y);
    return 0;
}
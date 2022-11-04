#include <stdio.h>

int main(){
    int x = 0;
    // se x<100 entra nel loop
    while (x<100)
    {
        // se x>50 esci dal ciclo while
        if (x<50) break;
        printf("ciao"); // viene eseguito se 50<x<100
    }
    
        // se x<100 entra nel loop
    
    while (x<100)
    {
        // se x>50 skippa quell'iterazione di while
        if (x<50) continue;
        printf("ciao"); // viene eseguito se 50<x<100
    }

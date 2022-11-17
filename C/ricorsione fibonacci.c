/*Scrivi un programma che calcoli tramite una funzione i termini della
 successione di fibonacci.*/

#include <stdio.h>

// L'n num di Fibonacci è F_(n-1)+F_(n-2)
int fibonacci(int n){
    if(n<=1){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    int n;
    printf("Quale num di fib vuoi sapere?");
    scanf("%d", &n);
    // richiamo la funzione ricorsiva Fibonacci
    printf("Il %d numero di Fibonacci e': %d", n, fibonacci(n));
    return 0;
}
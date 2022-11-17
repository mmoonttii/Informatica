/*Scrivi un programma che calcoli tramite una funzione i termini della
 successione di fibonacci.*/

#include <stdio.h>

// L'n num di Fibonacci è F_(n-1)+F_(n-2)
int fibonacci(int num){
    int fib;
    
    if(num<=1){
        //printf("\n1");
        return 1;
    }else{
        fib = fibonacci(num-1)+fibonacci(num-2);
        //printf("\n%d", fib);
        return fib;
    }
}

int main(){
    int n;
    printf("Quale num di fib vuoi sapere?");
    scanf("%d", &n);
    // ciclo per stampare tutti i fibonacci
    for (int i=0; i<n; i++){
		printf("\n%d", fibonacci(i));
	}
    return 0;
}
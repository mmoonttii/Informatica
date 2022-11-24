#include <stdio.h>

int main(){
    int alpha = 4;
    int beta = 7;
    int *pointer;
    pointer = &alpha;
    printf("alpha %d, beta %d, pointer %p\n", alpha, beta, pointer);
    beta = *pointer;  // assegnamo a beta il contenuto dell'indirizzo contenuto in pointer
    printf("alpha %d, beta %d, pointer %p\n", alpha, beta, pointer);
    alpha = pointer;
    printf("alpha %d, beta %d, pointer %p\n", alpha, beta, pointer);
    *pointer = 5; // assegniamo quello che è contenuto nell'indirizzo indicato da pointer
    printf("alpha %d, beta %d, pointer %p\n", alpha, beta, pointer);
    return 0;
}
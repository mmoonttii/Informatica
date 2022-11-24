// Puntatori

#include <stdio.h>

int main(){
    int var; // definizione variabile;
    int *pointer; // int indica che il pointer è associato a una var intera
    var = 4;
    pointer = &var; // & indica che alla var pointer assegnamo l'indirizzo di var
    printf("var: %d\n", var);
    printf("pointer: %p\n", pointer);
    return 0;
}
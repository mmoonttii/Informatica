/* Si scriva un programma per calcolare e^x mediante il suo sviluppo in serie:
 e^x = 1 + x/1! + x^2/2! + x^3/3! ...
 Ogni frazione aggiunge precisione al risultato, per cui conviene svilippare la serie fino a un numero di
 frazioni n adeguatamente elevati, ad esempio compresi tra 30 e 40. Si verifichi che i risultati calcolati in
 questo modo siano coerenti con quelli forniti dalla funzione intrinseca exp(x) calcolando la differenza
 dei valori.*/

#include <stdio.h>
#include <math.h>

int main(){
    long double e = 1;
    int x;
    int precision;
    long int fact = 1;
    long double nepero;
    long double diff;
    
    // x - esponente di e; precision - precisione del risultato
    printf("Inserire x tale che e^x [int]: ");
    scanf("%d", &x);

    printf("\nInserire precisione [int]: ");
    scanf("%d", &precision);
    
    nepero = exp(x);

    // itero fino alla precisione richiesta
    for (int i = 1; i < precision; i++){
        fact = fact * i; // factorial of n = n(n-1)!
        // printf("\n%ld", fact); per debug
        e = e + (pow(x,i)/fact); // e è il termine precedente
    }
    
    diff = nepero - e;
    printf("\ne^x con serie: %Lf", e);
    printf("\ne^x con funzione: %Lf", nepero);
    printf("\ndifferenza : %Lf", diff);

    return 0;
}

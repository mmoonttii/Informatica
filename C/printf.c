#include <stdio.h>


int main(){
    printf("Prova 123 è \n");

int x = 12;

// stampare una var richiede un direttiva di conversione "%d" indica che x è int
    printf("1 %d \n", x);

// variabili char %c, variabili %f float o double, %e float o double in esponenziale

float f = 9.87989;

    printf("2 %f \n", f);
    printf("3 %e \n", f);
    
// stamperà solo il n di cifre tra % e f, approssimando

    printf("4 %.2f \n", f);
    
// per incolonnare in maniera particolare
    printf("5 %8.2f \n", f);
    printf("6 %4.2f \n", f);

// stampare più variabili
    char a = 'p';
    printf("7 %d %f %c\n", x, f, a);
	printf("8 %d%f %c2\n", x, f, a);
    
//variabili e testo, \t è una tabulazione
    printf("9 \tLa var \"x\" è %d\n", x);
    
	// putchar() stampa un solo carattere
	putchar('\n');
	putchar('c');
	putchar('\n');
	putchar('parola'); // notare come viene stampata solo l'ultima lettera
	return 0;
}

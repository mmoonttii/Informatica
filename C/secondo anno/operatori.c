#include <stdio.h>
#include <math.h>

int main(){
	// +, -, *, /
	// %(modulo) è il resto INTERO della divisione tra due numeri 5%3 = 2
	// pow(x,y) è potenza di base x, esponente y
	
	int x=6;
	int y=2;
	
	printf("%d \n", x%y);	//stampa il modulo tra 6 e 2
	printf("%e \n", pow(x,y));	// potenza 6**2 in esponenziale
	
	// operatori unari
	printf("POST-INCREMENTO X:%d, y:%d\n", x++,y--); // prima stampa poi incrementa
	
	printf("PRE-INCREMENTO x:%d, y:%d\n", ++x,--y); // prima incrementa poi stampa

	// OPERATORI RELAZIONARI <, >, <=, >=, ==, !=
	// 
	// OPERATORI LOGICI !x (NOT), x && y (AND), x || y (OR)
	
	
	// CONDIZIONALE x ? y : z
	// se x è vero, esegue y, se x è falso esegue z
	
	int h, i=1, j=2, k=3;
	
	h = (i==1) ? 2*j : 2*k;
	printf("%d\n", h);
	
	h = (i!=2) ? 3*j : 4*k;
	printf("%d\n", h);
	return 0;
}

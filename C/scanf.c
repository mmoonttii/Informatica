#include <stdio.h>

int main(){
	// si comporta generalmente come printf(), tranne per alcune eccezioni
	int x;
	double y;
	char pip;
	// utilizzare & indica che si vuole andare a modificare la cellula di memoria fisica
	printf("Inserisci int: \n");
	scanf("%d", &x);
	// vengono salvati solamente i dati che sono compatibili con il tipo della var
	// scanf() non può printare messaggi come print in python
	printf("%d \n", x);
	
	// si possono inserire più variabili
	printf("inserisci int double: \n");
	scanf("%d%lf", &x,&y);
	printf("Il valore di x è %d\nIl valore di y è %f \n", x,y);
	
	// così come putchar(). getchar() lavora solo con un carattere
	
	printf("inserisci char:");
	pip = getchar();
	
	
	return 0;
}


/* Scrivi un programma che calcoli il fattoriale di un un numero */

#include <stdio.h>

int main(){
	int num;
	printf("Inserire l'intero di cui calcolare il fattoriale");
	scanf("%d", &num);
	int count=num;
	int fact=1;
	
	for (int i=0; i<count; i++){
		fact = fact*num;
		num-=1;
	}
	printf("%d", fact);
	return 0;
}

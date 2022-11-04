/*Scrivi un programma che calcoli il cubo di tre numeri utilizzando una
funzione.*/

#include <stdio.h>

float cubo(float num){
	float res = num*num*num;
	printf("%f al cubo e': %f", num, res);
	return res;
}

int main(){
	float a;
	printf("Primo numero da elevare al cubo: ");
	scanf("%f", &a);
	cubo(a);
	
	printf("\nSecondo numero da elevare al cubo: ");
	scanf("%f", &a);
	cubo(a);

	printf("\nTerzo numero da elevare al cubo: ");
	scanf("%f", &a);
	cubo(a);
	
	return 0;
}

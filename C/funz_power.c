/*Scrivete una funzione avente due parametri interi b ed e che calcoli la
potenza b^e.*/

#include <stdio.h>
#include <math.h>
int power(int b, int e){
	int res=1;
	int i;
	for (i=0; i<e; i++){
		res = res*b;
	}
	return res;
}

int main(){
	int base;
	int exp;
	double neg;
	
	printf("Inserire base: ");
	scanf("%d", &base);
	printf("\nInserire esponente: ");
	scanf("%d", &exp);
	
	if (exp !=0){
		if (exp > 0){
			printf("\nIl risultato e': %d", power(base,exp));
		}else if(exp < 0){
			neg = (power(base, abs(exp)));
			printf("\nIl risultato e': %lf", (1/neg));
		}
	}else if(exp==0){
		printf("Il risultato e' 1");
	}
	return 0;
}

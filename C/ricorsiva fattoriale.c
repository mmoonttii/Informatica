//Fattoriale con ricorsione

#include <stdio.h>

//questa funzione ricorsiva calcola il fattoriale
int fact(int n){
	if (n<2){
		return 1;
		}else{
	return n*fattoriale(n-1);
	}

int main(){
	int num;
	printf("Inserire num di cui calcolare il fattoriale: ");
	scanf("%d", &num);
	printf("\nIl fattoriale di %d e' %d ", num, fact(num)); 
	return 0;
}

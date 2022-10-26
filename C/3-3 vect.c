/*Scrivi un programma che legga un vettore di interi e lo stampi*/

#include <stdio.h>

int main(){
	int size;
	
	printf("Inserire dimensione vect");
	scanf("%d", &size);
	int vect[size];
		
	for(int i=0; i<size; i++){
		printf("\nInt in pos %d: ", i);
		scanf("%d", &vect[i]);
	}
	
	for(int j=0; j<size; j++){
		printf("\n %d => %d", j, vect[j]);
	}
	return 0;
}

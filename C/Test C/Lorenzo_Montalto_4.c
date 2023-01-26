/*ESERCIZIO 4
Scrivere un programma in C che legge un vettore di interi di
dimensione fissata e ne stampa la somma*/

#include <stdio.h>

int main(){
	int size;
	printf("Inserire dimensioni array: ");
	scanf("%d", &size);
	
	int arr[size];
	for (int i=0; i <size; i++){
		printf("\npos %d: ", i);
		scanf("%d", &arr[i]);		
	}
	
	int sum = 0;
	for (int j=0; j<size; j++){
		sum = sum + arr[j];		
	}
	printf("La somma e': %d", sum);
	return 0;
}

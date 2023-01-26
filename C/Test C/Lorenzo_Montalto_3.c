/*ESERCIZIO 3
Scrivere un programma che:
Generato il numero di elementi di un vettore con la funzione random
(numero di elementi compreso tra 1 e 10) e Inseriti da tastiera gli
elementi del vettore
Lo stampa sullo schermo (ben incolonnato con 6 numeri per riga).
Calcola la media degli elementi delle vettore.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int randomize(){
	int num;
	srand(time(NULL));
	/* L'operatore % restiuisce il resto della divisione per il 
	numero che segue in tal modo limitiamo il range di rand()*/
	num = rand() % 10 + 1;
	
	return num;
}

int main(){
	int size;
	size = randomize();
	
	// Acquisisco i dati dell'array
	int arr[size];
	for (int i=0; i<size; i++){
		printf("\npos %d: ", i);
		scanf("%d", &arr[i]);
	}
	
	// Stampo i valori dell'array in 6 colonne
	for (int j=0; j<size; j = j+6){
		printf("\n%d", arr[j]);
		printf("%d", arr[j+1]);
		printf("%d", arr[j+2]);
		printf("%d", arr[j+3]);
		printf("%d", arr[j+4]);
		printf("%d", arr[j+5]);
	}
	
	/* Sommo tutti i valori inseriti nell'array che divisi 
	per la dimesione dell'array danno la media*/
	int sum=0;
	float avg;
	for ( int k=0; k<size; k++){
		sum = sum + arr[k];
	}
	
	avg = sum / size;
	printf("\navg: %f", avg);
	return 0;
}

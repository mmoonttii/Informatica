/*Scrivi un programma che, letti due vettori v1 e v2 di dimensione 5, determini il vettore w di lunghezza 10
ottenuto alternando gli elementi di v1 con quelli di v2.*/
#include <stdio.h>

int main(){
	int v1[5];
	int v2[5];
	int w[10];
	
	for(int i=0; i<5; i++){
		printf("\nv1 pos %d ", i);
		scanf("%d", &v1[i]);
		printf("\nv2 pos %d ", i);
		scanf("%d", &v2[i]);
	}
	
	for(int j=0; j<5; j++){
		w[2*j]=v1[j];
		w[2*j+1]=v2[j];
	}

	for(int k=0; k<10; k++){
		printf("%d", w[k]);
	}
	return 0;
}

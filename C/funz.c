// Dichiarazione di funzione
/* formatoValore nomeFunzione(parametri){
	codice;
	return; => cosa restituisce la funzione
}*/

#include <stdio.h>


//Funzione media di due voti
float avg(float v1, float v2){
	float m;
	m = (v1+v2)/2;
	return m;
	}

int main(){
	float voto1;
	printf("Inserire primo voto: ");
	scanf("%f", &voto1);
	
	float voto2;
	printf("Inserire secondo voto: ");
	scanf("%f", &voto2);
	
	float media;
	media = avg(voto1, voto2);
	printf("La media e' %f", media);
	
	//oppure direttamente dentro la funzione
	printf("\n%f", avg(5,6));
	
	return 0;
}

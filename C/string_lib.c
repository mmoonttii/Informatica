//Libreria 'string.h'
#include <stdio.h>
#include <string.h>
/*Data una stringa con nome, una con cognome, concatenarle. 
Sovrascriverle con "Pacinotti"*/
int main(){
	//strcpy(s1,s2) = copia s2 su s1, sovrascrivendola
	//strncpy(s1,s2,n) = copia i primi n car di s2 su s1
	//strcat(s1,s2) = concatena s2 a s1
	//int strlen(s1) = lunghezza della stringa s1
	
	char nome[20], cognome[20];
	char paci[]="Pacinotti";
	
	printf("Inserire nome seguito da uno spazio: ");
	scanf("%s", nome);
	printf("\nInserire cognome: ");
	scanf("%s", cognome);
	
	strcat(nome,cognome); //concateno le stringhe di nome e cognome
	printf("\n%s", nome);
	int len=strlen(nome); //calcolo la loro lunghezza
	printf("\nLunghezza nome e cognome %d", len);
	strcpy(nome,paci); //sovrascrivo nome con Paci
	printf("\n%s", nome);
	return 0;
}

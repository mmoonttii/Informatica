/*Scrivere un programma che concateni a una stringa i primi 5 caratteri dell'
altra. Dopodiche farlo senza usare la libreria*/

#include <stdio.h>
#include <string.h>

int lib(){
	char s1[20];
	char s2[20];
	//Acquisizione variabili
	printf("inserire s1: ");
	scanf("%s", s1);
	printf("\ninserire s2: ");
	scanf("%s", s2);
	
	//concatenazione
	strncpy(s1,s2, 5);
	printf("\ns1+s2[0:4]: %s", s1);
	return 0;
}

int monti(){
	char s1[20];
	char s2[20];
	
	//acquisizione dati
	printf("inserire s1: ");
	scanf("%s", s1);
	printf("\ninserire s2: ");
	scanf("%s", s2);
	
	

}
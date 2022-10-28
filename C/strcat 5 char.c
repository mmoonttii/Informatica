/*Scrivere un programma che concateni a una stringa i primi 5 caratteri dell'
altra. Dopodiche farlo senza usare la libreria*/

#include <stdio.h>
#include <string.h>

int main(){
	char s1[20];
	char s2[20];
	printf("inserire s1: ");
	scanf("%s", s1);
	printf("inserire s2: ");
	scanf("%s", s2);
	
	strncpy(s1,s2, 5);
	print("s1+s2[0:4]: ", s1);
}

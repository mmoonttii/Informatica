//Stinghe
#include <stdio.h>

int main(){
	char nome[20];
	char cognome[20];
	char nomeCompleto[40];
		
	printf("Inserire nome: ");
	scanf("%s", nome);
	
	printf("Inserire cognome: ");
	scanf("%s", cognome);
	
	//printf("%s %s", nome, cognome);
	
	//Al nome completo assegno i valori del nome fino al 'null'
	int i=0;
	while (nome[i]!='\0'){
		nomeCompleto[i]=nome[i];
		i++;
	}
	
	//Inserisco lo spazio tra nome e cognome
	nomeCompleto[i] = ' ';
	i++;
	
	//Assegno a nomeCompleto i valori di cognome fino al 'null'
	//i > indice della stringa completa, j > indice del cognome
	int j=0;
	while (cognome[j]!='\0'){
		nomeCompleto[i]=cognome[j];
		i++;
		j++;
	}
		
	printf("Nome Completo: %s", nomeCompleto);
	return 0;
}


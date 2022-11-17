//Calcola l'area di un poligono dati base, area e tipo (triangolo, rettangolo)

#include <stdio.h>

double rect(double b, double h){
	double area;
	area = (b*h);
	return area;
}

double tria(double b, double h){
	double area;
	area = (b*h)/2;
	return area;
}

int main(){
	double base;
	double height;
	printf("Inserire base: ");
	scanf("%lf", &base);
	printf("\nInserire altezza: ");
	scanf("%lf", &height);

	char c;
	printf("\nTriangolo o Rettangolo: [t/r]");
	scanf("%c", &c);
	printf("%c", c);
	double res;
	switch(c){
		case 't':
			res = tria(base,height);
			break;
		
		case 'r':
			res = rect(base, height);
			break;
		
		default:
			res = -1;
			break;
	}
	
	
	printf("L'area e': %lf", res);

	return 0;
}

/*ESERCIZIO 2
Scrivere una funzione che riceva in ingresso le coordinate x, y di tre
vertici di un triangolo nel piano cartesiano e restituisca il perimetro del
triangolo. Scrivere successivamente un programma che richieda in
input le coordinate di un punto A e ne visualizzi la distanza dal punto B
(-5, 3) utilizzando la funzione indicata.*/

#include <stdio.h>
#include <math.h>

float perimeter(int x1, int y1, int x2, int y2, int x3, int y3){
	float side12;
	float side23;
	float side13;
	
	// La funzione sqrt() è parte della libreria math
	side12 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	side23 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	side13 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
	
	return side12+side23+side13;
}

float distance(int x, int y){
	// La funzione distance() calcola la distanza del punto in input da B(-5, 3)
	float dist;
	
	dist = sqrt((-5-x)*(-5-x)+(3-y)*(3-y));
	
	return dist;
}

int main(){
	
	// Il triangolo ha come vertici i punti A(xa, ya); B(xb,yb); C(xc, yc)
	int xa, ya;
	int xb, yb;
	int xc, yc;
	
	printf("X_A: ");
	scanf("%d", &xa);
	printf("\nY_A: ");
	scanf("%d", &ya);
	printf("\nX_B: ");
	scanf("%d", &xb);
	printf("\nY_B: ");
	scanf("%d", &yb);
	printf("\nX_C: ");
	scanf("%d", &xc);
	printf("\nY_C: ");
	scanf("%d", &yc);
	
	float perimetro;
	perimetro = perimeter(xa, ya, xb, yb, xc, yc);
	printf("\nPerimetro: %f", perimetro);
	
	// Calcolo della distanza del punto A(x, y) dal punto B(-5, 3)
	int x;
	int y;
	
	printf("\n\nPunto A distante da B(-5,3)");
	printf("\nx_A: ");
	scanf("%d", &x);
	printf("\ny_A: ");
	scanf("%d", &y);
	
	float distanza;
	distanza = distance(x, y);
	
	printf("\nA e' distante %f da B(-5,3)", distanza);

	return 0;
}


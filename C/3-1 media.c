#include <math.h>
#include <stdio.h>

int main(){
	float mark;
	int num;
	float sum=0;
	float avg;
	
	printf("Inserire q.ta voti ");
	scanf("%d", &num);
	printf("\n%d", num);

	for (int i=0; i<num; i++){
		printf("\nInserire voto: ");
		scanf("%f", &mark);
		sum+=mark;
	}
	avg = sum/num;
	printf("\nLa media e' %f", avg);
	return 0;
}

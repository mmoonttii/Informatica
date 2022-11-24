//Strutturare una FUNZIONE che risolve una funzione di secondo grado
#include <stdio.h>
#include <math.h>

/*int ma(){

    delta = (b*b) - (4*a*c);
    printf("\nDelta: %lf", delta);

    if (delta != 0){
        if (delta > 0){
            x1 = -b + sqrt(delta);
            x2 = -b - sqrt(delta);
            printf("\nx1: %lf", x1);
            printf("\nx2: %lf", x2);
        }else{
            printf("\nNon esistono soluzioni reali!");
            }
    }else{
        x1 = -b + sqrt(delta);
        x2 = x1;
        printf("\nx1: %lf", x1);
        printf("\nx2: %lf", x2);
    }
    return 0;
}*/
void eqz (double a, b, c, *x1, *x2){
    
    delta = (b*b) - (4*a*c);
    printf("\nDelta: %lf", delta);

    if (delta != 0){
        if (delta > 0){
            *x1 = -b + sqrt(delta);
            *x2 = -b - sqrt(delta);
            
        }else{
            printf("\nNon esistono soluzioni reali!");
            }
    }else{
        *x1 = -b + sqrt(delta);
        *x2 = x1;
    }

}

int main(){
    double a,b,c;
    double x1,x2;

    printf("Se ax^2 + bx + c=0 e' l'eq. data, inserisci a: ");
    scanf("%lf", &a);
    printf("\nInserisci b: ");
    scanf("%lf", &b);
    printf("\nInserisci c: ");
    scanf("%lf", &c);
    
    double x1,x2;
    eqz(a,b,c, &x1, &x2);
    printf("\nx1: %lf", x1);
    printf("\nx2: %lf", x2);
    return 0;
}
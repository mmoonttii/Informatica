#include <stdio.h>

int main(){
    int a = 0;
    int b = 1;
    int *p1;
    int *p2;
    char c = 'c';
    char *pchar;
    // pointer = &a; & restituisce l'indirizzo
    // *pointer = b; * restituisce ciò che è contenuto a quell'indirizzo

    p1 = &a;
    p2 = &b;
    pchar = &c;
    printf("a %d, b %d, p1 %p, p2 %p, char %c, pchar %p ,pchar %x", a, b, p1, p2, c, pchar, pchar);

    int *pp;
    pp = &p1;
    printf("\n pp %p", pp);
    return 0;
}

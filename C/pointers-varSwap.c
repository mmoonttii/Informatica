#include <stdio.h>

void swap(int *apt, int *bpt){
    int c;
    c = *apt;
    *apt = *bpt;
    *bpt = c;
}

int main(){
    int a = 1;
    int b = 2;
    printf("%d, %d", a, b);

    swap(&a, &b);
    printf("\n%d, %d", a, b);
    return 0;
}

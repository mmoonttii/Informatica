#include <stdio.h>

int main(){
    int a, b;

    printf("Inserire a: ");
    scanf("%d", &a);

    printf("\nInserire b: ");
    scanf("%d", &b);

    if (a>b)
    {
        printf("a è maggiore di b\n");
    }else if(b>a){
        printf("b è maggiore di a");
    }else{
        printf("a == b\n");
    }
    
    return 0;
}
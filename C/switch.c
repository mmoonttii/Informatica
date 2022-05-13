#include <stdio.h>

int main(){
    int x;
    // lo switch può essere usato solo con var int o char e solo uguaglianza
    printf("Inserire intero x: ");
    scanf("%d", x);
    switch (x){
    case 1:
        printf("\nx è 1");
        break;

    case 2:
        printf("\nx è 2");
        break;
    
    default:
        printf("\ndefault");
        break;
    }

    return 0;
}
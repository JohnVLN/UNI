#include <stdio.h>
#define max 5

int main()
{
    int vet[max], i;
    int a = 0;
    
    for(i = 0; i < max; i++) {
        printf("Insert 5 numbers: ");
        scanf("%d", &vet[i]);
    }
    
    for(i = 0; i < max; i++) {
        if(vet[i] > 100) {
            a += 1;
        }
    }
    printf("You typed %d numbers higher than 100.", a);
    
    return 0;
}

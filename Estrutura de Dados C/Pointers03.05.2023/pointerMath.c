#include <stdio.h>

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    printf("Insert value A: \n>> ");
    scanf("%d", pa);
    printf("Insert value B: \n>> ");
    scanf("%d", pb);

    printf("\n------- Calc -------");
    printf("\nSum (%d + %d): %d", *pa, *pb, (*pa + *pb));
    printf("\nSub (%d - %d): %d", *pa, *pb, (*pa - *pb));
    printf("\nDiv (%d / %d): %.2f", *pa, *pb, ((float)*pa / (float)*pb));
    printf("\nMul (%d * %d): %d", *pa, *pb, (*pa * *pb));
    printf("\n--------------------");
    
    return 0;
}

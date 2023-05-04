#include <stdio.h>

int sum(int b, int c) {
    int a = b + c;
    return a;
}
int sub(int b, int c) {
    int a = b - c;
    return a;
}
float dv(int b, int c) {
    float a = (float)b / (float)c;
    return a;
}
int mul(int b, int c) {
    int a = b * c;
    return a;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    printf("Insert value A: \n>> ");
    scanf("%d", pa);
    printf("Insert value B: \n>> ");
    scanf("%d", pb);

    printf("\n------- Calc -------");
    printf("\nSum (%d + %d): %d", *pa, *pb, sum(*pa, *pb));
    printf("\nSub (%d - %d): %d", *pa, *pb, sub(*pa, *pb));
    printf("\nDiv (%d / %d): %.2f", *pa, *pb, dv(*pa, *pb));
    printf("\nMul (%d * %d): %d", *pa, *pb, mul(*pa, *pb));
    printf("\n--------------------");
    
    return 0;
}

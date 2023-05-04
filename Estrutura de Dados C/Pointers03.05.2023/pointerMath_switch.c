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

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    char c;
    
    printf("Insert value A:\n>> ");
    scanf("%d", pa);
    printf("Insert value B:\n>> ");
    scanf("%d", pb);
    printf("Choose operation (+ - / *)\n>> ");
    scanf(" %c", &c);
    
    switch(c) {
        case '+':
            printf("\nSum (%d + %d): %d", *pa, *pb, sum(*pa, *pb));
            break;
        case '-':
            printf("\nSub (%d - %d): %d", *pa, *pb, sub(*pa, *pb));
            break;
        case '/':
            printf("\nDiv (%d / %d): %.2f", *pa, *pb, dv(*pa, *pb));
            break;
        case '*':
            printf("\nMul (%d * %d): %d", *pa, *pb, mul(*pa, *pb));
            break;
    }

    return 0;
}

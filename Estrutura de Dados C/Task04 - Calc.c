#include <stdio.h>

float add(char o, float a, float b) {
    float s;
        switch(o) {
            case 'a':
                s = a + b;
                printf("%f + %f = %f", a, b, s);
                break;
            case 's':
                s = a - b;
                printf("%f - %f = %f", a, b, s);
                break;
            case 'm':
                s = a * b;
                printf("%f * %f = %f", a, b, s);
                break;
            case 'd':
                s = a / b;
                printf("%f / %f = %f", a, b, s);
                break;
        }
    }

int main()
{
    char o;
    float a;
    float b;
    float s;
    
    printf("Calculator3000 v1.1\n\n");
    printf(" a = addition\n s = subtraction\n m = multiplication\n d = division\nSelect an operator: ");
    scanf("%c", &o);
    
    printf("num A: ");
    scanf("%f", &a);
    printf("num B: ");
    scanf("%f", &b);
    
    add(o, a, b);

    return 0;
}
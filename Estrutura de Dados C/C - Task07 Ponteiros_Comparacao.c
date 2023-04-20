#include <stdio.h>

int comp(int *a, int *b) {
    if(a > b) {
        printf("Maior endereço: %p \nPonteiro c5737", a);
    } else {
        printf("Maior endereço: %p \nPonteiro d5737", b);
    }
}

int main() {
    int a5737 = 3, b5737 = 7;
    int *c5737, *d5737;
    
    c5737 = &a5737;
    d5737 = &b5737;
    
    comp(c5737, d5737);
    
    return 0;
}

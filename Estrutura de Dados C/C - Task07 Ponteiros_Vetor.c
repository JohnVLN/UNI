#include<stdio.h>

int main() {
    int v5737[7] = {1, 2, 3, 4, 5, 6, 7};
    int i;
    
    for(i = 0; i < 7; i++) {
        printf("\nValor da posição i: %d", v5737[i]);
        printf("\nEndereço da posição i: %p\n", &v5737[i]);
    }
    
    return 0;
}
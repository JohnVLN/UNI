#include <stdio.h>

void insort(int v[200], int n) {
    int i, j, x;
    for(i = 1; i < n; i++) {
        x = v[i];
        j = i - 1;
        while(j >= 0 && v[j] > x) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = x;
    }
}

int main() {
    int v[200], n, i;
    
    printf("Insira o tamanho do vetor:\n>> ");
    scanf("%d", &n);
    printf("\nInsira %d elementos para o vetor:\n", n);
    for(i = 0; i < n; i++) {
        printf(">> ");
        scanf("%d", &v[i]);
    }
    printf("\nVetor criado: ");
    for(i = 0; i < n; i++) {
        printf("%d\t", v[i]);
    }
    
    insort(v, n);
    printf("\nVetor ordenado: ");
    for(i = 0; i < n; i++) {
        printf("%d\t", v[i]);
    }
    
    printf("\n");
    return 0;
}

#include <stdio.h>

void bubble(int v[200], int n) {
    int i, j, aux;
    for(i = n - 1; i > 0; i--) {
        for(j = 0; j < i; j++) {
            if(v[j] > v[j + 1]) {
                aux = v[j]; 
                v[j] = v[j + 1]; 
                v[j + 1] = aux; //troca
            }
        }
    }
}

int main()
{
    int v[200], n, i;
    printf("Entre tamanho desejado do vetor:");
    scanf("%i", &n);
    printf("Entre os %d elementos do vetor:\n", n);
    for(i = 0; i < n; i++){
        scanf("%i", &v[i]);
    }
    bubble(v, n);
    printf("\n\nVetor ordenado:\n");
    for(i = 0; i < n; i++){
        printf("%d\t",v[i]);
    }
    printf("\n");
    return 0;
}

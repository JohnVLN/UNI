#include <stdio.h>

int main()
{
    int num[] = {10, 20, 30, 40, 50};
    int a, b;
    
    printf("Num: {10, 20, 30, 40 ,50}\n");
    printf("Selecione um valor dentro do vetor num. [1 - 5]\n");
    scanf("%d", &a);
    
    b = 0 + (a - 1);
    printf("\n\n------------- Informações do valor ------------\n");
    printf("Valor: %d\n", num[b]);
    printf("Endereço da variável a: %p\n", &a);
    printf("Endereço da variável b: %p", &b);
    
    return 0;
}

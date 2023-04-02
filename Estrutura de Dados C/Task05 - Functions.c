#include <stdio.h>

float con(float nota1, float nota2) {
    float res;
    res = ((nota1 * 4) + (nota2 * 6)) / 10;
    printf("\nMédia Ponderada das Notas: %.2f\n", res);
    
    if(res < 5) {
        printf("Conceito Final - D");
    }
    else if(4.9 < res && res < 7) {
        printf("Conceito Final - C");
    }
    else if(6.9 < res && res < 9) {
        printf("Conceito Final - B");
    }
    else {
        printf("Conceito Final - A");
    }
}

int main()
{
    float nota1, nota2, res;
    
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    
    con(nota1, nota2);
    
    return 0;
}

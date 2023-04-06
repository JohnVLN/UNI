#include <stdio.h>

/* Função calculo de dispesa */
float dis(float s, float val) {
    float res;
    res = s - val;
    return res;
}

/* Funcção calculo de receita */
float rec(float s, float val) {
    float res;
    res = s + val;
    return res;
}

/* struct de projeto */
struct projeto {
    int num;
    float s;
} p;

int main() {
    float s, val, initial_s; /* float de saldo e valor de recurso */
    char type; /* tipo de despesa */
    int a; /* numero de recursos a serem calculados */
    int i = 0;
    
    printf("Insert project number: ");
    scanf("%d", &p.num);
    printf("Insert project value: ");
    scanf("%f", &p.s);
    initial_s = p.s;
    
    printf("-------------------------------------------\n");
    printf("Recursos:\n");
    printf("Quantos recursos serão calculados? ");
    scanf("%d", &a);
    
    /* calculo de saldo */
    for(i = 0; i < a; i++) {
        printf("Valor do recurso: ");
        scanf("%f", &val);
        printf("r (receita) ou d (dispensa)?");
        scanf(" %c", &type);
        if(type == 'r'){
            p.s = rec(p.s, val);
        } else if (type == 'd') {
            p.s = dis(p.s, val);
        }
    }
    
    printf("\nNumero do Projeto: %d", p.num);
    printf("\nSaldo Inicial: R$%.2f", initial_s);
    printf("\nSaldo Final: R$%.2f", p.s);
    
    return 0;
}

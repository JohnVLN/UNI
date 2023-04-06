#include <stdio.h>

/* Função calculo de dispesa */
float dis(float s, float val){
    s = s - val;
}

/* Funcção calculo de receita */
float rec(float s, float val) {
    s = s + val;
}

/* struct de projeto */
struct projeto {
    int num;
    float s;
} p;

int main() {
    float s, val; /* float de saldo e valor de recurso */
    char type; /* tipo de despesa */
    int a; /* numero de recursos a serem calculados */
    int i = 0;
    
    printf("Insert project number: ");
    scanf("%d", &p.num);
    printf("Insert project value: ");
    scanf("%f", &p.s);
    
    
    /*  */
    printf("-------------------------------------------\n");
    printf("Recursos: Insira os valores a serem somados \nou subtraídos do saldo do projeto.\n");
    printf("Quantos recursos serão calculados? ");
    scanf("%d", &a);
    
    for(i = 0; i < a; i++) {
        printf("Valor do recurso: ");
        scanf("%f", &val);
        printf("r (receita) ou d (dispensa)?");
        scanf(" %c", &type);
        if(type == 'r'){
            rec(s, val);
        } else if (type == 'd') {
            dis(s, val);
        }
        i += 1;
    }
    
    printf("Numero do Projeto: %d", p.num);
    printf("Saldo Inicial: %.2lf", p.s);
    printf("Saldo Final: %.2lf", s);
    
    return 0;
}
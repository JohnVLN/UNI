#include<stdio.h>

int main()
{
    float mat[4][4];
    float par, imp;
    int i, j, a;
    
    /* inserting values for the array */
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%f\n", &mat[i][j]);
        }
    }
    
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(j % 2 == 0) {
                par += mat[i][j];
                a += 1;
            }
            else {
                imp += mat[i][j];
            }
        }
    }
    
    printf("\n The sum of values in columns divisible by 2: %f", par);
    printf("\n Avarage of values in columns not divisible by 2: %f", imp);
    
    return 0;
}
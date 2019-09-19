#include <stdio.h>
#include <matrizes.h>

void main(){
    float M[3][3] = {5,1,4,2,7,10,7,9,10}, aux=0, V[3];
    printf("iniciando em 0\n");
    for(int i = 0; i < 3; i++){
        for(int c = 0; c < 3; c++){
            printf(" %.1f ", M[i][c]);
        }
        printf("\n");
    }
    printf("\n\n");

    /*printf("iniciando em 1\n");
    for(int i = 1; i <= 3; i++){
        for(int c = 1; c <= 3; c++){
            printf(" %.1f ", M[i][c]);
        }
        printf("\n");
    }*/
    printf("\n\n");
    for(int i = 1; i < 3; i++){
        aux=0;
        for(int j = 3; j > 0; j--){
            if(aux < M[i][j]){
                printf("Aux = %f | M[%d][%d] = %f\n", aux, i, j, M[i][j]);
                aux = M[i][j];
                V[i] = aux;
            }
        }
    }

    for(int i=0; i<3;i++){
        printf("O valor de V[%d] = %f\n", i, V[i]);
    }
}
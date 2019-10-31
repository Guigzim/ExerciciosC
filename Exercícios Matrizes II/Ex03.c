#include <stdio.h>
#include <stdlib.h>

void main(){
    int M[10][10];
    printf("Inicia a Matriz: \n");
    for(int l = 0; l < 10; l++){
    
        for(int c = 0; c < 10; c++)
        {
            M[l][c] = rand()%100;
            printf("%3d", M[l][c]);
        }
        printf("\n");
    }
    printf("\n----------------------------------------------------\n");
    int aux[10];
    for(int i = 0; i < 10; i++){
        aux[i] = M[2][i];
        M[2][i] = M[8][i];
        M[8][i] = aux[i];
        
        aux[i] = M[5][i];
        M[5][i] = M[9][i];
        M[9][i] = aux[i];
    }
    for(int l = 0; l < 10; l++){
        for(int c = 0; c < 10; c++){
            printf("%3d", M[l][c]);
        }
        printf("\n");
    }   
}
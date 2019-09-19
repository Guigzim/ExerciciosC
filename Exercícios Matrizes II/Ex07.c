#include <stdio.h>

void main(){
    int M[2][2], DP=1,DS=1;
    RDMpreencheMatriz(M,2,2,20);
    imprimeMatriz(M,2,2);
    for(int i = 0; i < 2; i++){

    }
    for(int i = 0; i < 2; i++){
        DP = DP * M[i][i];
    }
    for(int i = 0; i < 2; i++){
        DS = DS * M[i][1-i];
    }
    printf("O determinante eh: %d", DP-DS);
    
}

/*Imprime uma matriz.
Parâmetros: 
M - Matriz a ser impressa
numLc - Numero de linhas da matriz
numCl - Numero de colunas da matriz*/
void imprimeMatriz(int *M, int numLn, int numCl){
    int i=0;
    for(int l = 0; l < numLn; l++){
        for(int c = 0; c < numCl; c++){
            printf("%5d", M[i]);
            i++;
        }
        printf("\n");

    }
}
/*Preenche uma matriz a partir de valores digitados pelo usuario.
Parâmetros: 
M - Matriz a ser preenchida
numLc - Numero de linhas da matriz
numCl - Numero de colunas da matriz*/
void preencheMatriz(int *M, int numLn, int numCl){
    int i=0;
    for(int l = 0; l < numLn; l++){
        for(int c = 0; c < numCl; c++){
            scanf("%d", M[i]);
            i++;
        }
    }
}
/*Preenche uma matriz com numeros gerados randomicamente.
Parâmetros: 
M - Matriz a ser preenchida
numLc - Numero de linhas da matriz
numCl - Numero de colunas da matriz*/
void RDMpreencheMatriz(int *M, int numLn, int numCl, int faixa){
    int i=0;
 
    for(int l = 0; l < numLn; l++){
        for(int c = 0; c < numCl; c++){
            M[i] = (rand()%100);
            i++;
        }
    }
}
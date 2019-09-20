#include <stdio.h>
#include <stdlib.h>

void main(){
    int M[5][5], V[5];
    RDMpreencheMatriz(M, 5,5,10);
    for(int i = 0; i < 5; i++){
        printf("Digite um valor para V[%d]: ", i);
        scanf("%d", &V[i]);
    }
    printf("\n##### IMPRIME MATRIZ #####\n");
    imprimeMatriz(M,5,5);
    printf("\n##### IMPRIME VETOR #####\n");
    printf("V = [ ");
    for(int i = 0; i < 5; i++){
        printf("%d ", V[i]);
    }
    printf("]\n");
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            M[l][c] = V[l] * M[l][c];
        }
    }
    printf("\n##### IMPRIME MATRIZ MULTIPLICADA #####\n");
    imprimeMatriz(M,5,5);

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
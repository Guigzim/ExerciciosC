#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Elabore um algoritmo que leia duas matrizes A, B
e que calcule a soma e mostre a impressão do 
resultado das duas matrizes que comportam 25 elementos. 
*/
//void imprimeMatriz(int *M);
void main(){
    int M[5][5], N[5][5], SOMA[5][5];
    srand(1);
    RDMpreencheMatriz(M,5,5,50);
    imprimeMatriz(M, 5,5);
    printf("\n----------------------------------\n");
    srand(2);
    RDMpreencheMatriz(N, 5, 5, 100);
    imprimeMatriz(N,5,5);
    printf("\n----------------------------------\n");
    
    for(int l = 0; l < 5; l++){
        for(int c = 0; c < 5; c++){
            SOMA[l][c] = M[l][c] + N[l][c];
        }
    }

    imprimeMatriz(SOMA, 5, 5);
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

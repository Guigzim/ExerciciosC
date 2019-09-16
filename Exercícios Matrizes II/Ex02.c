#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <matrizes.h>
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Elabore um algoritmo que leia duas matrizes A, B
e que calcule a soma e mostre a impressão do 
resultado das duas matrizes que comportam 25 elementos. 
*/
//void imprimeMatriz(int *M);
void main(){
    int M[10][20], N[10][20], SOMA[10][20];
    for (int l = 0; l < 10; l++)
    {
        for (int c = 0; c < 10; c++)
        {
            M[l][c] = rand()%100;
            N[l][c] = rand()%50;
            SOMA[l][c] = M[l][c] + N[l][c];
        }
    }
    imprimeMatriz(M,(sizeof(M)/sizeof(M[0])), (sizeof(M[0])/sizeof(int)));
}
void imprimeMatriz(int matriz[][], int numLn, int numCl){
    printf("\nLinhas: %d\nColunas: %d\n", numLn, numCl);
}


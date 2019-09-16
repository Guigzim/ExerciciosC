#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Faça um algoritmo que lê valores para uma matriz M4X4 e um valor
para a variável “a” (do tipo simples).
Multiplicar cada valor contido na matriz pelo valor da variável e
colocar os resultados num vetor V com 16 elementos. Mostre no final o vetor.
*/


void imprimeMatriz(int *M, int numLn, int numCl);
void preencheMatriz(int *M, int numLn, int numCl);
void RDMpreencheMatriz(int *M, int numLn, int numCl, int faixa);

void main(){
    int M[4][4], VR[16], a;

    printf("Digite um valor para a variavel 'a': ");
    scanf("%d", &a);
    srand(5);
    RDMpreencheMatriz(M, 4,4,50);
    printf("\nMatriz gerada randomicamente: \n");
    imprimeMatriz(M,4,4);
    int *aux = M;
    for(int i = 0; i < 16; i++){
        VR[i] = aux[i] * a;
        printf("\nVR[%2d] = %3d", i, VR[i]);
    }


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





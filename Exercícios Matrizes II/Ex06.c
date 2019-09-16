#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Faça um algoritmo que lê uma matriz M5X5 criar um vetor V com 25 posições.
Inserir valores no vetor de acordo com as seguintes regras:
a.Quando o valor contido na matriz for par inserir no vetor o próprio valor
b.Se for ímpar inserir no vetor o resultado da soma do valor dos índices da matriz e do vetor.
*/


void imprimeMatriz(int *M, int numLn, int numCl);
void preencheMatriz(int *M, int numLn, int numCl);
void RDMpreencheMatriz(int *M, int numLn, int numCl, int faixa);

void main(){
    int M[5][5], SL[5], SC[5];
    RDMpreencheMatriz(M,5,5,10);
    imprimeMatriz(M,5,5);
    for(int l = 0; l < 5; l++){
        SL[l] = 0;
        SC[l] = 0;
        for(int c = 0; c < 5; c++){
            SL[l] += M[l][c];
            SC[l] += M[c][l];
        }
    }
        printf("SL[] = [");
    for(int i = 0; i < 5; i++){
        printf(" %3d ", SL[i]);
    }
        printf("]\n");
        printf("SC[] = [");
    for(int i = 0; i < 5; i++){
        printf(" %3d ", SC[i]);
    }
        printf("]\n");
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





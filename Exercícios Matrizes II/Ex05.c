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
    int M[5][5], V[25], count=0;
    RDMpreencheMatriz(M, 5,5,50);
    imprimeMatriz(M,5,5);

    for(int l = 0; l < 5;l++){
        for(int c = 0; c < 5; c++){
            if(M[l][c]%2 == 0){
                V[count] = M[l][c];
                count++;
            }else{
                V[count] = l+c+count;
                count++;
            }
        }
    }
    for(int i = 0; i < 25;i++){
        printf("V[%2d] = %2d\n", i, V[i]);
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





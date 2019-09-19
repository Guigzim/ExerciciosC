#include <stdio.h>
#include <stdlib.h>

void main(){
    int M[4][4], count=0;
    preencheMatriz(M,4,4);
    imprimeMatriz(M,4,4);

    for(int l = 0; l < 4; l++){
        for(int c = c; c < 4; c++){
            if(M[l][c] != M[c][l]){
                count++;
            }
        }
    }
    if(count > 0){
        printf("Nao eh simetrica");
    }else{
        printf("Eh simetrica");
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
            printf("Insira um valor para a matriz na posicao [%d][%d]: ", l,c);
            scanf("%d", &M[i]);
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
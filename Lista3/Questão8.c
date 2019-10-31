#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Faça uma sub-rotina que verifique se a matriz informada é simétrica ou não. Uma matriz só
pode ser considerada simétrica se A[ i, j ] = A [ j, i ].*/


void isSemetrica(int linhaA,int colunaB){

        if(linhaA==colunaB){
            printf("Eh simetrica");
        }
        else
        {
            printf("N eh simetrica");
        }
}

void main(){

    int linhaA,colunaA,linhaB,colunaB;
    printf("Digite quantas linhas a matriz A tera: ");
    scanf("%d",&linhaA);
    printf("\nDigite quantas colunas a matriz A tera: ");
    scanf("%d",&colunaA);
    printf("\nDigite quantas linhas a matriz B tera: ");
    scanf("%d",&linhaB);
    printf("\nDigite quantas colunas a matriz B tera: ");
    scanf("%d",&colunaB);

    int matrizA[linhaA][colunaA];
    int matrizB[linhaB][colunaB];

    for(int l=0;l<linhaA;l++){
        for(int c=0;c<colunaA;c++){
                matrizA[l][c]=rand()%9;
        }
    }
    for(int l=0;l<linhaB;l++){
        for(int c=0;c<colunaB;c++){
                matrizB[l][c]=rand()%9;
        }
    }

    isSemetrica(linhaA,colunaB);
}

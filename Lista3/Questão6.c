#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int somaDiagonal(int *matriz,int linha,int coluna){

    int soma=0;

    for(int i=0;i<coluna*linha;i=i+5){
        soma+=matriz[i];
    }

    return soma;
}

void main(){

    int matriz[4][4];

    for(int l=0;l<4;l++){

        for(int c=0;c<4;c++){
                matriz[l][c]=rand()%9;
            }
        }

    printf("%d",somaDiagonal(matriz,4,4));
    }






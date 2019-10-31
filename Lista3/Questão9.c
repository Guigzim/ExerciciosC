#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Elabore um algoritmo que preencha uma matriz M[3][4] com n�meros reais. Utilize uma fun��o
para copiar todos os valores da matriz para um vetor de 12 posi��es. Esse vetor dever� ser
mostrado no programa principal.
*/


void copiaValor(int *matriz,int *vetor){

    for(int i=0;i<12;i++){

        vetor[i]=matriz[i];
    }
}

void main(){

    int matriz[4][3],vetor[12];

    for(int l=0;l<4;l++){

        for(int c=0;c<4;c++){

                matriz[l][c]=rand()%10;
        }
    }

    copiaValor(matriz,vetor);

    for(int i=0;i<12;i++){

        printf("%3d",vetor[i]);
    }


}


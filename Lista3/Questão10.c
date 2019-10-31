#include <stdio.h>
#include <stdlib.h>
#include <conio.h>




void inverteMatriz(int *matriz){

    int j=0;
    int vetorAux[4]

    for(int i=0;i<16;i++){

        if(i=0){

            for(int j=i;j<=3;i++){

                vetorAux[j]=matriz[j];
            }


        }
        else if(i%4==0){

        }
        else{

        }
    }

}

void main(){

    int matriz[10][10];

    for(int l=0;l<10;l++){


        for(int c=0;c<10;c++){

            matriz[l][c]=rand()%50;
        }
    }

    inverteMatriz(matriz);






}

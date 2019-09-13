#include <stdio.h>
#include <stdlib.h>

void main(){
/*1.Faça um algoritmo que lê valores para uma matriz M10x10 calcular e mostrar:
    a.O somatório dos valores da coluna 2
    b.O somatório dos valores da diagonal principal
*/
    int M[10][10], RA=0, RB=0;
    printf("---- Preenche e exibe a Matriz ----\n");
    for(int l = 0; l < 10; l++){
        for(int c = 0; c < 10; c++){
            M[l][c] = rand()%100;
            printf("%4d", M[l][c]);
            if(c == 2)
                RA += M[l][c];
            if( l == c)
                RB += M[l][c];
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Somatorio dos valores da coluna 2 eh: %d\n", RA);
    printf("Somatorio dos valores da diagonal principal eh: %d\n", RB);
}
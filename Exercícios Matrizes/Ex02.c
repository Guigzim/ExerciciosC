#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Faça um algoritmos que lê uma matriz M5x5 e a matriz deve ser preenchida através das colunas, por exemplo se for digitado 1,2,3,4,5,6,7,8,9,10,...
Após mostre a matriz resultante.*/
void main(){
    int Matriz[5][5];

    for(int l = 0; l < 5;l++){
        for(int c = 0; c < 5;c++){
            printf("Digite um valor inteiro para a linha %d e coluna %d\n", l,c);
            scanf("%d", &Matriz[c][l]);
        }
    }

    printf("\nExibe a Matriz\n");
    for(int l = 0; l < 5;l++){
        for(int c = 0; c < 5;c++){
            printf("%d", Matriz[l][c]);
            printf(" | ");
        }
        printf("\n");
    }
}
#include <stdio.h>
#include <string.h>
#include <locale.h>

void main(){
    int Matriz[5][5];

    for(int l = 0; l < 5;l++){
        for(int c = 0; c < 5;c++){
            printf("Digite um valor inteiro para a linha %d e coluna %d\n", l,c);
            scanf("%d", &Matriz[l][c]);
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
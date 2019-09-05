#include <stdio.h>
#include <string.h>
#include <locale.h>

/* Faça um algoritmo que lê uma matriz M5x5 calcular e mostrar a soma de todos os valores da linha 4 */
void main(){
    int Matriz[5][5], soma=0;

    for(int l = 0; l < 5;l++){
        for(int c = 0; c < 5;c++){
            printf("Digite um valor inteiro para a linha %d e coluna %d\n", l,c);
            scanf("%d", &Matriz[l][c]);
        }
    }
    for(int l = 0; l < 5;l++){
        for(int c = 0; c < 5;c++){
            printf("%d", Matriz[l][c]);
            printf(" | ");
            if(l == 4){
                soma += Matriz[l][c];
            }
        }
        printf("\n");
    }

    printf("A soma é: %d", soma);
    

}
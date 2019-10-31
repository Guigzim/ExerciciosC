#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/*Escreva um programa que preencha um vetor de inteiros de 10 posições e solicite ao usuário
um valor inteiro para ser procurado no vetor. Crie uma função que receba como parâmetro o
vetor e o numero a ser procurado. Ao final, retorne quantas vezes o número foi encontrado no
vetor.*/

int encontraIguais(int numero,int *vetor){

    int aparicoes=0;
    for(int i=0;i<10;i++){

        if(numero==vetor[i]){

            aparicoes++;
        }
    }
    return aparicoes;

}

void main(){

    int vetor[10];
    int numero;

    for(int i=0;i<10;i++){
        vetor[i]=rand()&9;
    }
    for(int i=0;i<10;i++){
        printf("%2d",vetor[i]);

    }
    printf("\n\n\n");
    printf("Digite um numero: ");
    scanf("%d",&numero);
    printf("\nO numero %d apareceu %d vezes no vetor",numero,encontraIguais(numero,vetor));

}

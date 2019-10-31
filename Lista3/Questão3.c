#include <stdio.h>
#include <stdbool.h>

/*Escreva um programa que leia 3 notas e o número de faltas de um aluno, calcule a sua média
e determine e exiba a sua situação. Caso o aluno tenha mais de 15 faltas, ele está
REPROVADO POR FALTA. Caso contrário, estará REPROVADO se sua média for menor
que 7.0 ou APROVADO se sua média for superior ou igual a 7.0.
Observações:
a) Utilize uma função para calcular a média e uma função void (procedimento)para determinar
e exibir a situação do aluno;
b) Não utilize variáveis globais.
*/

float Media(float n1,float n2,float n3);
void Situacao(int faltas,float media);

void main(){

    int faltas;
    float nota1,nota2,nota3;

    printf("Digite a quantidade de faltas: ");
    scanf("%d",&faltas);
    printf("\nDigite a nota 1: ");
    scanf("%f",&nota1);
    printf("\nDigite a nota 2: ");
    scanf("%f",&nota2);
    printf("\nDigite a nota 3: ");
    scanf("%f",&nota3);
    float media = Media(nota1, nota2, nota3);
    Situacao(faltas, media);


}
float Media(float n1,float n2,float n3){

    float media;
    media=(n1+n2+n3)/3;

    return media;

}

void Situacao(int faltas,float media){

    if (faltas > 15 || media < 7){
        printf("\nAluno reprovado");
    }
    else{
        printf("\nAluno Aprovado");
    }

}

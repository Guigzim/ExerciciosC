#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*Escreva uma fun��o chamada NOME_MES que receba um valor inteiro N (de 1 a 12) e
retorne um string (caracter) contendo o nome do m�s correspondente a N. Fa�a o programa
principal que leia uma data (no formato dia, m�s e ano) e, usando a fun��o NOME_MES,
exiba a data lida no formato abaixo:
EXEMPLO:
Entrada: 23 11 1998
Sa�da: 23 de novembro de 1998*/

void NOME_MES(int n, char *mes_string);
bool IsDataValid(int dia, int mes, int ano);

void main(){
    int dia, mes, ano;
    char mes_string[15];
    do{
    printf("Digite o dia: ");
    scanf("%d", &dia);
    printf("Digite o mes: ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);
    }while(IsDataValid(dia, mes, ano));
    NOME_MES(mes, mes_string);
    printf("%d de %s de %d", dia, mes_string, ano);


}
bool IsDataValid(int dia, int mes, int ano){
    if(dia < 1 || dia > 31){
        printf("\nDia invalido!\n");
        return true;
    }
    if(mes < 1 || mes > 12){
        printf("\nMes invalido!\n");
        return true;
    }
    if(mes == 2 && dia > 28){
        printf("\nFevereiro so vai ate dia 28!\n");
        return true;
    }
    return false;
}

void NOME_MES(int n, char *mes_string){

    char meses[12][15] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};

    for (int i = 0; i < 15; i++)
    {
        mes_string[i] = meses[n-1][i];
    }
    

}












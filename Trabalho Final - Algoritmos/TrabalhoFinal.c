/*
TRABALHO FINAL DA DISCIPLINA DE ALGORITMOS E LÓGICA DE PROGRAMAÇÃO II
ALUNOS: GUILHERME DE BARROS DA ROCHA
MATRÍCULA: 2019015315
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>


void Descriptografa(char *mensagem, int chave);

void main(){

    setlocale(LC_ALL, "Portuguese");
    //Declara as variáveis
    FILE *mensagem_crypt, *mensagem_decrypt;
    char texto[300], result[25];
    int chave;

    printf("##### Cifra de César #####\n");

    printf("Digite o nome do arquivo que será gravada a mensagem: \n ");//Recebe o nome do arquivo que será gravada a mensagem após a descriptografia
    gets(result);

    printf("Digite a chave para descriptografar a mensagem (quantidade de casas, padrão: 1): \n"); //Recebe o numero de casas que serão alteradas
    scanf("%d", &chave);

    mensagem_crypt = fopen("dados.txt", "r"); //abre o arquivo com a mensagem criptografada em modo de leitura

    if(mensagem_crypt == NULL){ //verifica se o arquivo abriu corretamente
        printf("Ocorreu um erro ao abrir o arquivo");
    }

    mensagem_decrypt = fopen(result, "w+"); //abre/cria o arquivo que receberá a mensagem após ser descriptografada
    if(mensagem_decrypt == NULL){ //verifica se o aquivo foi aberto/criado corretamente
        printf("Ocorreu um erro ao abrir/criar o arquivo!");
    }

    while( !feof(mensagem_crypt) ){ //percorre o arquivo do início até o final

        fgets(texto, 300, mensagem_crypt); //camptura todas as palavras do arquivo e armazena em uma string
        Descriptografa(texto, chave); //função que descriptografa o texto
        printf("%s", texto); //imprime no console
        fprintf(mensagem_decrypt, "%s", texto); //Grava a mensagem descriptografada no arquivo criando/aberto anteriormente
    }

    //fecha ambos os arquivos
    fclose(mensagem_crypt);
    fclose(mensagem_decrypt);
}

void Descriptografa(char *mensagem, int chave){//Função descriptografa recebe um ponteiro de char que é a mensagem a ser descriptografada e um valor int que é quantas casas vão ser alteradas

    strlwr(mensagem); //para garantir coloca todas as letras em minusculo
    int tamanho = 0;
    tamanho = strlen(mensagem);//descobre o tamanho da mensagem

    for(int i = 0; i<tamanho;i++){ //percorre a mensagem caractere por caractere

        //Converte os numeros
        if(mensagem[i]>=48 && mensagem[i]<=57){ //verifica se o ASCII do caractere está entre 48 e 57, ou seja se é um número entre '0' e '9'

            mensagem[i] -= chave; //diminui a posição do ASCII na quantidade informada na chave
            if(mensagem[i] < 48){ // caso o valor resultade da diminuição seja menor que 48 ele soma 10 para voltar para o final da sequencia.
                mensagem[i] += 10;
            }
        }

        //Converte as letras
        if (mensagem[i] >= 97 && mensagem[i] <=122 ){ //esse passo é exatamente igual ao anterior porém feito com os valores entre 97 e 122 que em ASCII representa as letras do alfabeto.

            mensagem[i] -= chave;
            if(mensagem[i] < 97){

                mensagem[i] += 26;
            }
        }
    }
}

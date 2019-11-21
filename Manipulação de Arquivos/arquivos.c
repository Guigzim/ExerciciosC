#include <stdio.h>
#include <string.h>


void main(){
    char nome_arquivo[50];
    char string[100];
    printf("Digite o nome do arquivo a ser gravado: ");
    gets(nome_arquivo);

    printf("Digite o texto a ser gravado no arquivo: ");
    gets(string);

    append(nome_arquivo, string, sizeof(nome_arquivo), sizeof(string));
}
void append(char *path, char *str, int path_size, int str_size){
    char a_path[path_size];
    char a_str[str_size];

    for (int i = 0; i < path_size; i++)
    {
        a_path[i] = path[i];
    }
    for (int i = 0; i < str_size; i++)
    {
        a_str[i] = str[i];
    }
        
    FILE *arquivo = fopen(a_path, "a+");
    fprintf(arquivo, a_str);
    fclose(arquivo);
}
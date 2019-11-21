#include <stdio.h>
#include <locale.h>

struct Aluno
    {
        long int matricula;
        char nome[50];

    }
typedef struct Aluno;
void exibe_aluno(Aluno *aluno_exibir);
voi main(){
    setlocale(LC_ALL, "");

    Aluno aluno01;
    aluno01.nome = "Guilherme";
    aluno01.matricula = 2019015315;
    
    
    exibe_aluno(aluno01);
    

}
void exibe_aluno(Aluno *aluno_exibir){
    printf("Nome: %s - %d", aluno_exibir.nome, aluno_exibir.matricula);
}


#include <stdio.h>
#include <stdbool.h>

bool isPerfeito(int num);
int fatorial(int num);


void main(){
    /* printf("Digite um numero: ");
    int num;
    scanf("%d", &num);
    if(isPerfeito(num))
        printf("O numero digitado eh perfeito!\n");
    else
        printf("O numero digitado nao eh perfeito!\n");
        
    printf("O fatorial do numero digitado eh: %d", fatorial(6));
 */
    int teste_fat = fatorial_recursiva(5);
    printf("o resultado foi: %d", teste_fat);

}

bool isPerfeito(int num){
    int sum = 0;
    for(int i = 1; i < num; i++){
        if(num%i == 0){
            sum += i;
        }
    }
    if(sum == num)
        return true;
    else
        return false;
}
int fatorial(int num){
    int fat = 1;
    for(int i = 1; i <= num; i++){
        fat = fat * i;
    }
    return fat;
}
int fatorial_recursiva(int num){
    if(num > 1){
        return num * fatorial_recursiva(num-1);
    }else{
        return num;
    }
}

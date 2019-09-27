#include <stdio.h>
#include <stdbool.h>

void main(){
    printf("Digite um numero: ");
    int num;
    scanf("%d", &num);
    if(isPerfeito(num))
        printf("O numero digitado eh perfeito!\n");
    else
        printf("O numero digitado nao eh perfeito!\n");
        
    printf("O fatorial do numero digitado eh: %d", fatorial(6));


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

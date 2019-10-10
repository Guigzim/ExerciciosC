#include <stdio.h>
#include <stdbool.h>

int diferenca_vetores(int *v1, int *v2, int *vr,int tam_vr, int tam);
void main(){
    int A[10] = {10,20,30,40,50,60,70,80,90,100}, B[10] = {1,2,3,10,20,40,100,8,9,12}, C[10], tam_C = 0;
    tam_C = diferenca_vetores(A,B,C,tam_C,10);

    for(int i = 0; i < tam_C; i++){
        printf("%d\n", C[i]);
    }
}
int diferenca_vetores(int *v1, int *v2, int *vr, int tam_vr, int tam){
    for(int j = 0; j < tam; j++){
        bool contain = true;
        for(int i = 0; i < tam; i++){
            if(v1[j] == v2[i]){
                contain = false;
            }
        }
        if(contain){
            vr[tam_vr] = v1[j];
            tam_vr++;
        }
    }
    return tam_vr;
}

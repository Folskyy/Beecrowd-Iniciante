#include<stdio.h>
int main(){
    int vetor[10];
    scanf("%d", &vetor[0]);

    for (int i=0; i<=9; i++){
        vetor[i+1]= 2*vetor[i];
        printf("N[%d] = %d\n", i, vetor[i]);
    }
}


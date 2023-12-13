#include<stdio.h>

int main(){
    int valor=0, valor2=0, posicao=0;

    for (int i=0; i<100; i++){
        scanf("%d", &valor2);
        if(valor2>valor){
            valor = valor2; 
            posicao = i+1;
        }
    }
    printf("%d\n%d\n", valor, posicao);
}
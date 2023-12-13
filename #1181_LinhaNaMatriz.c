#include<stdio.h>

void operacao (){
    char T; float matriz[12][12]; int linha=0; float soma = 0;
    
    scanf("%d ", &linha);
    scanf("%c ", &T);
    for(int l=0; l<=11; l++){
        for(int c=0; c<=11; c++){
           scanf("%f", &matriz[l][c]);
            if(l==linha)
                soma += matriz[l][c];
        }
    }
    if(T == 'S') printf("%.1f\n", soma);
    if(T == 'M') printf("%.1f\n", soma/12);
}

int main(){
    operacao();
}


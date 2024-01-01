#include<stdio.h>
#include<stdlib.h>

int main(){
    int tamanho_pulo, npulos, pulo_atual, pulo_anterior;

    scanf("%d %d", &tamanho_pulo, & npulos);
    scanf("%d", &pulo_atual);

    pulo_anterior = pulo_atual;

    for(int i = 0; i < npulos; i++){
        scanf("%d", &pulo_atual);

        if(abs(pulo_anterior - pulo_atual) > tamanho_pulo){
            printf("GAME OVER\n");
            return 0;
        }

        pulo_anterior = pulo_atual;
    }
    printf("YOU WIN\n");
}
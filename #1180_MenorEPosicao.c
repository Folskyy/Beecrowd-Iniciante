#include <stdio.h>

int main(){
    int n; scanf("%d",&n); n -=1;
    int x[n]; 

    for (int a=0; a<=n-1; a++)
        scanf("%d ", &x[a]);

    int valor = x[n-1], posicao = n-1;

    for (int a=0; a<=n-1; a++){
        if (x[a] < valor){
            valor = x[a];
            posicao = a;
        }
    }

printf("Menor valor: %d\nPosicao: %d\n", valor, posicao);
}

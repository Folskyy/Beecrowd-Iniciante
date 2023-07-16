#include<stdio.h>

void quadrado_par(int x){
for (int i=1; i<=x; i++){
        if (i%2 == 0){
            printf("%d^2 = %d\n", i, i*i);
        }
    }
}

int main(){
    int x; scanf("%d",&x);
    quadrado_par(x);
}
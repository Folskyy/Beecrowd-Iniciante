#include <stdio.h>

void impar_consecutivo (int x){
    if (x%2 == 0){
        x += 1;
        for (int i = 0; i < 6; i++){
            printf("%d\n", x);
            x += 2;
        }
    }
    else{
        for (int i = 0; i < 6; i++){
            printf("%d\n", x);
            x += 2;
        }
    }
}

int main(){
    int x;  scanf("%d",&x);
    impar_consecutivo(x);
}
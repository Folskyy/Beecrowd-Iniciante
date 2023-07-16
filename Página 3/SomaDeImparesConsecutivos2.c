#include<stdio.h>

int main(){
    int soma = 0, n, a, b; scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        scanf("%d %d", &a, &b);
        if (a == b)
            printf("0\n");
        else if (a>b){
            for(b++; b < a; b++){
                if (b%2 != 0)
                    soma += b;
            }
            printf("%d\n", soma);
        }
        else if (a<b){
            for(a++; a < b; a++){
                if (a%2 != 0)
                    soma += a;
            }
            printf("%d\n", soma);
        }
        soma = 0;
    }
}
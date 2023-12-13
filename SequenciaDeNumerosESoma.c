#include<stdio.h>

int main(){
    int a, b, soma = 0;
    
    scanf("%d %d", &a, &b);
    while (1){
        if (a > b && a*b > 0 && a>0){
            for (b; b<=a; b++){
                printf("%d ", b);
                soma += b;
            }
            printf("Sum=%d\n", soma);
        }
        else if(b > a && a*b > 0 && a>0){
            for (a; a<=b; a++){
                printf("%d ", a);
                soma += a;
            }
            printf("Sum=%d\n", soma);
        }
        else if (b*a <= 0)
            return 0;
        soma = 0;
        scanf("%d %d", &a, &b);
    }
}
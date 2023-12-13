#include<stdio.h>

int main(){
    int n, x, y, soma=0; scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
            for (int j = 1; j <= y; j++){
                if (x%2 == 0){
                    x++;
                }
                soma += x;
                x+=2;
            }
        printf("%d\n", soma);
        soma = 0;
    }
}

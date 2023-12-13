#include<stdio.h>

int main(){
    int soma, x;
    while (x!=0){
        soma = 0;
        scanf("%d", &x);
        if (x == 0)
            return 0;
        if(x%2 == 0){  
            for (int y = x; y < (x+10); y+=2)
                soma+=y;
            printf("%d\n", soma);
        }
        else{
            for (int y = x+1; y < (x+10); y+=2)
                soma+=y;   
            printf("%d\n", soma);
        }
    }
}

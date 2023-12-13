#include<stdio.h>

int main(){
    int intervalo, y;
    scanf("%d %d", &intervalo, &y);

    for(int i=1; i<y-1; i+=intervalo){
        for (int j=i; j < i+intervalo; j++){
            if(j == i+intervalo-1)
            printf("%d", j);
            else
            printf("%d ", j);
        }
        printf("\n");
    }
}

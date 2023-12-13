#include<stdio.h>

int main(){
    int x, y, i;
    scanf("%d %d", &x, &y);
    if (y<x){
        i = x; x = y; y = i;
    }
    for (x+=1; x < y; x++){
        if (x%5==2 || x%5==3)
            printf("%d\n", x);
    }
}
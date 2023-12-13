#include<stdio.h>

void tabuada (int n){
    for (int i=1; i<=10; i++){
        printf("%d x %d = %d\n", i, n, i*n);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    if(n > 2 && n < 1000)
        tabuada(n);
}
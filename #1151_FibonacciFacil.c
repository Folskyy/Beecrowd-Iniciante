#include<stdio.h>

int fibonacci (int n, int a, int b){
    int x;
    printf("%d %d ", a, b);
    for(int i = 3; i <= n; i++){
    x = a + b;
    a = b;
    b = x;
    if (i == n)
        printf("%d\n", x);
    else
        printf("%d ", x);
    
    }
}

int main(){
    int a=0, b=1, n=0; scanf("%d", &n);
    fibonacci(n, a, b);
    }
    

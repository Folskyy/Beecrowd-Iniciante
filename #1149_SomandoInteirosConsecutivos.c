#include<stdio.h>

int main(){
    int a, n, x=0; 
    scanf("%d %d", &a, &n);
    while(n<=0){
        scanf("%d", &n);
    }
    //0 <= i <= N-1
    for (int i = 0; i<=n-1; i++){
    x+=a+i;
    }
    printf("%d\n", x);

}

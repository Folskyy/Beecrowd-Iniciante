#include<stdio.h>

int main(){
    long long int num;
    int i = 0;

    scanf("%lld", &num);

    while(num){
        i = num % 10;
        num = num / 10;
        printf("%d", i);
    }
    printf("\n");
}
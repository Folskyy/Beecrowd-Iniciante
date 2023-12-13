#include<stdio.h>

int main(){
    int f;
    scanf("%d", &f);
    for(int i = f-1; i>0; i--)
        f *= i;
    printf("%d\n", f);
}

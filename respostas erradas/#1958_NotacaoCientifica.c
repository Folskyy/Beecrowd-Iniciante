#include<stdio.h>

int main(){
    double n;

    scanf("%lf", &n);

    if(n > 0)
        printf("+%.4E\n", n);
    else
        printf("%.4E\n", n);
}
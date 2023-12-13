#include<stdio.h>

int main(){
    float n=0;
    for (int i =1; i<=100; i++){
    n += (float)1/i;
    }
    printf("%.2f\n", n);
}


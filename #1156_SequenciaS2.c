#include<stdio.h>

int main(){
    int n=1;    float f =0;
    for (int i = 1; i<=39; i+=2){
    f += (float)i/n;
    n *= 2;
    }
    printf("%.2f\n",f);
}

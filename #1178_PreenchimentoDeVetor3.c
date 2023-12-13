#include<stdio.h>

int main(){
    double n[100]; scanf("%lf", &n[0]);

    for (int i = 0; i < 100; i++){
        if (i == 0){
            printf("N[0] = %.4lf\n", n[0]);
            i++;
        }
        n[i] = n[i-1]/2;
        printf("N[%d] = %.4lf\n",i, n[i]);
    }
}


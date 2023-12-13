#include<stdio.h>
int main(){
    float n = 0;
    int x = 0;

    scanf("%f", &n);
        while (n>=100){
        n = n - 100;
        x++;
    }
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n", x);
    x = 0;
        while (n>=50){
        n = n - 50;
        x++;
    }
    printf("%d nota(s) de R$ 50.00\n", x);
    x = 0;
        while (n>=20){
        n = n - 20;
        x++;    
    }
    printf("%d nota(s) de R$ 20.00\n", x);
    x = 0;
        while (n>=10){
        n = n - 10;
        x++;
    }
    printf("%d nota(s) de R$ 10.00\n", x);
    x = 0;
        while (n>=5){
        n = n - 5;
        x++;
    }
    printf("%d nota(s) de R$ 5.00\n", x);
    x = 0;
        while (n>=2){
        n = n - 2;
        x++;
    }
    printf("%d nota(s) de R$ 2.00\n", x);
    x = 0;
        while (n>=1){
        n = n - 1;
        x++;
    }
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n", x);
    x = 0;
        while (n>=0.5){
        n = n - 0.5;
        x++;
    }
    printf("%d moeda(s) de R$ 0.50\n", x);
    x = 0;
        while (n>=0.25){
        n = n - 0.25;
        x++;
    }
    printf("%d moeda(s) de R$ 0.25\n", x);
    x = 0;
        while (n>=0.1){
        n = n - 0.1;
        x++;
    }
    printf("%d moeda(s) de R$ 0.10\n", x);
    x = 0;
        while (n>=0.05){
        n = n - 0.05;
        x++;
    }
    printf("%d moeda(s) de R$ 0.05\n", x);
    x = 0;
        while (n>=0.009){
        n = n - 0.01;
        x++;
    }
    printf("%d moeda(s) de R$ 0.01\n", x);
}
#include<stdio.h>

int main(){
    float valor1, valor2;

    scanf("%f %f", &valor1, &valor2);

    float aumento = ((valor2 * 100) / valor1) - 100;

    printf("%.2f%%\n", aumento);
}
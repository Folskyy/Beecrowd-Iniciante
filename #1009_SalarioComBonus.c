#include<stdio.h>

int main ()
{
    char nome;
    double salario, vendas;

    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);

    printf("TOTAL = R$ %.2f\n", salario+(vendas*0.15));
}
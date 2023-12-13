#include<stdio.h>

int main()
{
    float salario;

    scanf("%f", &salario);

    if (salario<=400)
    {
        printf("Novo salario: %.2f\n", salario + (salario*0.15));
        printf("Reajuste ganho: %.2f\n", salario*0.15);
        printf("Em percentual: 15 %%\n");
    }

    if (salario > 400 && salario <= 800)
    {
        printf("Novo salario: %.2f\n", salario + (salario*0.12));
        printf("Reajuste ganho: %.2f\n", salario);
        printf("Em percentual: 12 %%\n");
    }

    if (salario > 800 && salario <= 1200)
    {
        printf("Novo salario: %.2f\n", salario + (salario*0.1));
        printf("Reajuste ganho: %.2f\n", salario*0.1);
        printf("Em percentual: 10 %%\n");
    }

    if (salario > 1200 && salario <= 2000)
    {
        printf("Novo salario: %.2f\n", salario + (salario*0.07));
        printf("Reajuste ganho: %.2f\n", salario*0.07);
        printf("Em percentual: 7 %%\n");
    }

    if (salario > 2000)
    {
        printf("Novo salario: %.2f\n", salario + (salario*0.04));
        printf("Reajuste ganho: %.2f\n", salario*0.04);
        printf("Em percentual: 4 %%\n");
    }
}
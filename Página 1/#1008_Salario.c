#include<stdio.h>

int main()
{
    int funcionario, horas;
    float phora;

    scanf("%d", &funcionario);
    scanf("%d", &horas);
    scanf("%f", &phora);
    
    printf("NUMBER = %d\n", funcionario);
    printf("SALARY = U$ %.2f\n", horas*phora);
}
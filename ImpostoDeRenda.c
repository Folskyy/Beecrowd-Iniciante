#include<stdio.h>

int main()
{
    float renda, save;

    scanf("%f", &renda);

    if (renda <= 2000)
        printf("Isento\n");
    else
    {
    if (renda >= 2000.01 && renda <= 3000)
    {
        save = (renda - 2000)*0.08;
    }
    if (renda >= 2000.01 && renda > 3000)
    {
        save = 80;
    }
    if (renda > 3000 && renda <= 4500)
    {
        save = 80 + ((renda - 3000)*0.18);
    }
    if (renda > 3000 && renda > 4500)
    {
        save = 350 + ((renda - 4500)*0.28);
    }
    printf("R$ %.2f\n", save);
    }
}
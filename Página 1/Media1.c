#include<stdio.h>

int main()
{
    double nota1, nota2;
    double peso1 = 3.5;
    double peso2 = 7.5;
    double media;

    scanf("%lf", &nota1);
    scanf("%lf", &nota2);

    media = (nota1*peso1 + nota2*peso2)/(peso1+peso2);

    printf("MEDIA = %.5f\n", media);
}
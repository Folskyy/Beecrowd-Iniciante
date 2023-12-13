#include<stdio.h>

int main(){
double nota1, nota2, nota3, media;
int peso1 = 2;
int peso2 = 3;
int peso3 = 5;

scanf("%lf", &nota1);
scanf("%lf", &nota2);
scanf("%lf", &nota3);

media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1 + peso2 + peso3);

printf("MEDIA = %.1f", media);
}
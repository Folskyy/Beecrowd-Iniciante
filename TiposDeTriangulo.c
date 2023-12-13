#include<stdio.h>
int main()
{
    double a, b, c, save;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a<b)
     {
            save = a;
            a = b;
            b = save;
     }
    if (a<c)
     {
        save = a;
        a = c;
        c = save;
      }
    if (b<c)
     {
        save = b;
        b = c;
        c = save;
     }

   if(a >= b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(a*a == b*b + c*c)
            printf("TRIANGULO RETANGULO\n");

        if(a*a > b*b + c*c)
            printf("TRIANGULO OBTUSANGULO\n");

        if(a*a < b*b + c*c)
            printf("TRIANGULO ACUTANGULO\n");

        if (a == b && c == b)
            printf("TRIANGULO EQUILATERO\n");

        if (a == b && b != c || b == c && c != a || c == a && a != b)  
            printf("TRIANGULO ISOSCELES\n");
    }
}
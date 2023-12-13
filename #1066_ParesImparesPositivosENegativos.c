#include<stdio.h>

int main()
{
    int par=0,imp=0,pos=0,neg=0,x,y;

    for (x=0; x<5; x++)
    {
        scanf("%d", &y);
        if (y < 0)
            neg++;
        if (y > 0)
            pos++;
        if (y%2==0)
            par++;
        if (y%2!=0)
            imp++;
    }
        printf("%d valor(es) par(es)\n", par);
        printf("%d valor(es) impar(es)\n", imp);
        printf("%d valor(es) positivo(s)\n", pos);
        printf("%d valor(es) negativo(s)\n", neg);

}
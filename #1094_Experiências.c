#include<stdio.h>

int main()
{
    int n, x, numerodc;
    float coelho=0, rato=0, sapo=0;
    char cobaia;

    scanf("%d", &n);

    for (x=0; x<n; x++)
    {
        scanf("%d %c", &numerodc, &cobaia);
        if (cobaia=='C')
            coelho += numerodc;
        if (cobaia=='R')
            rato   += numerodc;
        if (cobaia=='S')
            sapo   += numerodc;
    }
    printf("Total: %.0f cobaias\n", coelho+rato+sapo);
    printf("Total de coelhos: %.0f\n", coelho);
    printf("Total de ratos: %.0f\n", rato);
    printf("Total de sapos: %.0f\n", sapo);
    printf("Percentual de coelhos: %.2f %%\n", coelho/(coelho+rato+sapo)*100);
    printf("Percentual de ratos: %.2f %%\n", rato/(coelho+rato+sapo)*100);
    printf("Percentual de sapos: %.2f %%\n", sapo/(coelho+rato+sapo)*100);

}
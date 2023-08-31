#include<stdio.h>

int main()
{
    int n = 0, cem = 0, cinq = 0, vin = 0, dez = 0, cin = 0, dois = 0, um = 0;

    scanf("%d", &n);
    printf("%d\n", n);
        while (n>=100)
    {
        n = n-100;
        cem++;
    }
        while (n>=50)
    {
        n = n-50;
        cinq++;
    }
        while (n>=20)
    {
        n = n-20;
        vin ++;
    }
        while (n>=10)
    {
        n = n-10;
        dez++;
    }
        while (n>=5)
    {
        n = n-5;
        cin ++;
    }
        while (n>=2)
    {
        n = n-2;
        dois ++;
    }
        while (n>=1)
    {
        n = n - 1;
        um++;
    }
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", cem, cinq, vin, dez, cin, dois, um);

}
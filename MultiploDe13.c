#include<stdio.h>

int main()
{
    int a, b, x = 0;

    scanf("%d\n%d", &a, &b);

    if (a>b){x=b; b=a; a=x;x=0;}
    //printf("a: %d, b: %d\n", a, b);

    while(a <= b)
    {
        if (a%13 != 0)
            x += a;
        a++;
    }

    printf("%d\n", x);
}
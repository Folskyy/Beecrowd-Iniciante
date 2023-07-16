#include<stdio.h>

int main()
{
    int a, b, x;
    
    scanf("%d\n%d", &a, &b);
    
    if(a>b){x=a; a=b; b=x; x=0;}
    //printf("a: %d, b: %d\n", a, b);

    if(a==b)
        printf("0\n");
    else
    {
        for (a += 1; a < b; a++)
        {
            if(a%2!=0)
                x += a;
        }
        printf("%d\n", x);
    }
}
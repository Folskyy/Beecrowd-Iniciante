#include<stdio.h>

int main()
{
    int a, b, c, x, A, B, C;

    scanf("%d %d %d", &a, &b, &c);

    A = a; B = b; C = c;

    if(a>b){x=a;a=b;b=x;x=0;}
    if(a>c){x=a;a=c;c=x;x=0;}
    if(b>c){x=b;b=c;c=x;x=0;}


    printf("\n%d\n%d\n%d\n\n%d\n%d\n%d\n", a,b,c, A,B,C);
}
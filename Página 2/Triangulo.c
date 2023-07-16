#include<stdio.h>

int main()
{
    float a, b, c, x;

    scanf("%f %f %f", &a, &b, &c);

    if(a<b){x=a;a=b;b=x;x=0;}
    if(a<c){x=a;a=c;c=x;x=0;}
    if(b<c){x=b;b=c;c=x;x=0;}

    if(a > abs(b-c) && a<b+c)
    {
        printf("Perimetro = %.1f\n", a+b+c);
    }
    else
    {
        printf("Area = %.1f\n", ((a+b)*c) / 2);
    }
    //printf("a = %.1f b = %.1f c = %.1f", a, b, c);

}
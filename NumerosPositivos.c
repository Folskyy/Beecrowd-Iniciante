#include<stdio.h>

int main()
{
    float a, b, c, d, e, f;
    int x=0;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);
    scanf("%f", &f);

    if (a>0)
    x++;

    if(b>0)
    x++;
    
    if(c>0)
    x++;
    
    if(d>0)
    x++;
    
    if(e>0)
    x++;
    
    if(f>0)
    x++;

    printf("%d valores positivos\n", x);
}
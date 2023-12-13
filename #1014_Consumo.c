#include<stdio.h>

int main()
{
    int d;
    float g;

    scanf("%d", &d);    
    scanf("%f", &g);

    printf("%.3f km/l\n", d/g);

}
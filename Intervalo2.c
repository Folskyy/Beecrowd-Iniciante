#include<stdio.h>

int main()
{
    int n, x, a, in=0, out=0;

    scanf("%d", &n);

    for (x=0; x < n; x++)
    {
        scanf("%d", &a);
         if (a >=10 && a <= 20)
            in++;
        else
            out++;
    }
    printf("%d in\n%d out\n", in, out);
}
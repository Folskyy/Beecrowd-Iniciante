#include<stdio.h>

int main()
{
    int n, x;
    scanf("%d", &n);

    for (x=2; x<10000; x++)
    {
        if (x % n == 2)
        {
            printf("%d\n", x);
        }
    }
}
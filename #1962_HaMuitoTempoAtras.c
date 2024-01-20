#include <stdio.h>
// 2015 // 2014 //
int main()
{
    int n, ano;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ano);

        if (ano > 2014)
            printf("%d A.C.\n", ano - 2014);
        else
            printf("%d D.C.\n", 2015 - ano);
    }
}
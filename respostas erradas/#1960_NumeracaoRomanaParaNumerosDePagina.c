#include <stdio.h>
// I, V é 5, X é 10, L é 50, C é 100, D é 500 e M representa 1000.
int main()
{
    int num, resto, i = 0;
    char roman[20];

    scanf("%d", &num);

    //-------------------------M-------------------------//
    resto = num % 1000;
    num = num / 1000 + i;

    for (i; i < num; i++)
        roman[i] = 'M';

    //-------------------------D-------------------------//
    num = resto / 500 + i;
    resto = resto % 500;

    for (i; i < num; i++)
        roman[i] = 'D';

    //-------------------------C-------------------------//
    num = resto / 100 + i;
    resto = resto % 100;

    if (num - i > 3)
    {
        roman[i++] = 'C';
        roman[i] = 'D';
    }
    else
    {
        for (i; i < num; i++)
            roman[i] = 'C';
    }

    //-------------------------L-------------------------//
    num = resto / 50 + i;
    resto = resto % 50;

    for (i; i < num; i++)
        roman[i] = 'L';

    //-------------------------X-------------------------//
    num = resto / 10 + i;
    resto = resto % 10;

    if (num - i > 3)
    {
        roman[i++] = 'X';
        roman[i] = 'L';
    }
    else
    {
        for (i; i < num; i++)
            roman[i] = 'X';
    }

    //-------------------------V-------------------------//
    num = resto / 5 + i;
    resto = resto % 5;

    for (i; i < num; i++)
        roman[i] = 'V';

    //-------------------------I-------------------------//
    num = resto / 1 + i;
    resto = resto % 1;

    if (num - i > 3)
    {
        roman[i++] = 'I';
        roman[i] = 'V';
    }
    else
    {
        for (i; i < num; i++)
            roman[i] = 'I';
    }

    roman[i + 1] = '\0';

    printf("%s\n", roman);
}

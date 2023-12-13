#include<stdio.h>

int main()
{
    int hi, mi, hf, mf, x, y;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    y = mf - mi;
    x = hf - hi;

    while (y > 60)
    {
        x++;
        y = y - 60;
    }  
    while (y < 0)
    {
        x--;
        y = y + 60;
    }
    if (x<0)
        x = x + 24;
    
    if (x==0 && y == 0)
    {
        x = 24;
        y = 0;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", x, y);

}
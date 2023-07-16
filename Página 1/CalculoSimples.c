#include<stdio.h>

int main()
{
    int peca1, npeca1, peca2, npeca2;
    float vunpeca1, vunpeca2;

    scanf("%d %d %f", &peca1, &npeca1, &vunpeca1);
    scanf("%d %d %f", &peca2, &npeca2, &vunpeca2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", npeca1*vunpeca1 + npeca2*vunpeca2);
}
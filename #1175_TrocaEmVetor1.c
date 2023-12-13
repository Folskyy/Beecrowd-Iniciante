#include<stdio.h>

int main(){
    int v[20], n;

    for (int i = 19; i >= 0; i--)
        scanf("%d", &v[i]);

    for (int j = 0; j < 20; j++)
        printf("N[%d] = %d\n", j, v[j]);
}


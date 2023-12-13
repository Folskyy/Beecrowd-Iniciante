#include<stdio.h>

int main(){
    int t, j = 0;
    do{ // loop para limitar o numero digitado
        scanf("%d", &t);
        if(t >=2 && t <= 50)
            break;
    }while(1);
    int v[t]; 

    for (int i = 0; i < t; i++){
            v[i] = i;
    }
    for(int i = 0; i < 1000; i++){
        if (j>=t)
            j=0;
        printf("N[%d] = %d\n",i ,v[j]);
        j++;
    }
}


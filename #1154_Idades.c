#include<stdio.h>

int main(){
int soma[2], count=0; soma[0]=0; soma[1] = 0;
    while(soma[1] >=0){
        scanf("%d", &soma[1]);
        if(soma[1] < 0)
            break;
        soma[0] += soma[1]; 
        count++;
    }
    printf("%.2f\n", (float)soma[0]/count);
}

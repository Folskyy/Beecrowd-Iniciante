#include<stdio.h>
#define senha 2002


int main (){
    int n;  scanf("%d", &n);
    while(1){
        if(n == senha){
            printf("Acesso Permitido\n");
            return 0;
        }
        else{
        printf("Senha Invalida\n");
        scanf("%d", &n);
        }
    }
}
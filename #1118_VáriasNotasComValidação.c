#include<stdio.h>

int main(){
    double a, b;
    int menu;
    do{
        while (1){
            scanf("%lf", &a);
            if (a > 10 || a < 0){
            printf("nota invalida\n");
            }
            else break;
        }
        while (1){
            scanf("%lf", &b);
            if (b > 10 || b < 0){
            printf("nota invalida\n");
            }
            else break;
        }
        printf("media = %.2lf\n", (a+b)/2);
        while (1){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &menu);
        if (menu == 2)
            return 0;
        else if (menu == 1)
            break;
        }
    }while (menu == 1);
}
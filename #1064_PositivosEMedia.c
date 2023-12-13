#include<stdio.h>
int main(){
    double a[6], media = 0;
    int contador=0;

    scanf("%lf %lf %lf %lf %lf %lf", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5]);
    for(int i = 0; i < 6; i++){
        if (a[i] > 0){
            contador++;
            media += a[i];
        }
    }
    printf("%d valores positivos\n%.1lf\n", contador, media/contador);
}
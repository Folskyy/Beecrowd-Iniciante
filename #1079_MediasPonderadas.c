#include<stdio.h>

int main(){
    int x; scanf("%d",&x);
    float a, b, c;
    for (int n =1; n <= x; n++){
        scanf("%f %f %f",&a, &b, &c);
        printf("%.1f\n", (a*2 + b*3 + c*5)/(10));
    }
}
#include<stdio.h>

int main(){
    int tempo, vm;

    scanf("%d", &tempo);
    scanf("%d", &vm);

    printf("%.3f\n", (tempo*vm)/12.000);//autonomia do carro: 12km/l
}
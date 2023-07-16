#include <stdio.h>
#define pi 3.141592
int main(){
    double raio;
    scanf("%lf", &raio);
    printf("VOLUME = %lf\n", (4.0/3)*pi*(raio*raio*raio));
}
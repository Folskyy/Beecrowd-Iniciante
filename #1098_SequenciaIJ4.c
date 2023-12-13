#include<stdio.h>

int main(){
    for (float i = 0; i < 2.1; i += 0.2){
        for (float j = i + 1; j <= i + 3.1; j++){
            if (i == 0 || i == 1 || i >=2)
                printf("I=%.0f J=%.0f\n", i, j);
            else
                printf("I=%.1f J=%.1f\n", i, j);
        }
    }
}
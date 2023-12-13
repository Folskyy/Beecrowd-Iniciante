#include<stdio.h>

int main(){
    int x, z, count=0, count1 =0;   scanf("%d %d", &x, &z);
    while(z<=x)
        scanf("%d", &z);
    for(int i = x; count<=z; i++){
        count+=i;
        count1++;
    }
    printf("%d\n", count1);
    
}

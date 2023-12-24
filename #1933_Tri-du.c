#include<stdio.h>

int tri_du(int carta1, int carta2){
    if(carta1 == carta2)
        return carta1;

    if(carta1 > carta2)
        return carta1;

    if(carta2 > carta1)
        return carta2;

    else
        return 0;
}

int main(){
    int carta1, carta2, carta3 = -1;

    scanf("%d %d", &carta1, &carta2);
    
    carta3 = tri_du(carta1, carta2);

    printf("%d\n", carta3);
}

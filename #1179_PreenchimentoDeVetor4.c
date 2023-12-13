#include<stdio.h>

int main(){
    int numero, par[5], impar[5], ref[2]; ref[1] = 0; ref[0] = 0;

    for (int i = 0; i < 15; i++){
        scanf("%d", &numero);
        if (numero%2 == 0){
            par[ref[0]] = numero;
            ref[0]++;
        }
        else{
            impar[ref[1]] = numero;
            ref[1]++;
        }
        if (ref[0] >= 5){
            for (int j = 0; j < 5; j++)
                printf("par[%d] = %d\n", j, par[j]);
            ref[0] = 0;
        }
        else if (ref[1] >= 5){
            for (int j = 0; j < 5; j++)
                printf("impar[%d] = %d\n", j, impar[j]);
            ref[1] = 0;
        }
        if(i==14){
            if(ref[1] > 0){
                for(int i = 0; i < ref[1]; i++)
                    printf("impar[%d] = %d\n", i, impar[i]);
            }
            if(ref[0] > 0){
                for(int i = 0; i < ref[0]; i++)
                    printf("par[%d] = %d\n", i, par[i]);
            }
        }
    }

}


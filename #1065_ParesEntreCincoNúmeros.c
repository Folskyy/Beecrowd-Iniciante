#include<stdio.h>

void leitura(int a[5]){
    int contador = 0;
    for (int i=0 ; i<5 ; i++){
        scanf("%d",&a[i]);
        if (a[i]%2 == 0)
            contador++;
    }
    printf("%d valores pares\n",contador);

}
int main(){
    int a[5];
    leitura(a);
}
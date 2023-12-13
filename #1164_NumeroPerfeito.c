#include <stdio.h>

void perfeito(){
    int a, soma = 0; scanf("%d", &a);
    for (int i = 1; i <a; i++){
        if (a%i == 0){
            soma += i;
        }
    }
    if (soma == a)
        printf("%d eh perfeito\n", a);
    else
        printf("%d nao eh perfeito\n", a);
}
int main(){
    int n; scanf("%d", &n);
    for (int i =1; i <=n; i++){
        perfeito();
    }
}

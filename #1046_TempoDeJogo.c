#include<stdio.h>
#include<math.h>

int horas(){
    int inicio, termino;
    scanf("%d %d", &inicio, &termino);
    if(inicio>termino){
        return abs(inicio-24)+termino;
    }
    else if(inicio == termino)
        return 24;
    else
        return termino - inicio;
}
int main(){
    int tempototal, inicio, termino;
    tempototal = horas();
    printf("O JOGO DUROU %d HORA(S)\n", tempototal);
}
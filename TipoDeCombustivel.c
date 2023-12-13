#include <stdio.h>

int main(){
    int alcool = 0, gasolina = 0, diesel = 0, menu;
    do{
        scanf("%d",&menu);
        switch(menu){
        case 1: alcool++; break;
        case 2: gasolina++; break;
        case 3: diesel++; break;
        case 4: break;
        }
    }while(menu != 4);
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
}
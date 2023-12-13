#include <stdio.h>

int main(){
    int inter[2], gremio[2], menu, grenal = 0, empate=0;
    inter[0] = 0; gremio[0] = 0;
    do{
    scanf("%d %d", &inter[1], &gremio[1]);
    if (inter[1] > gremio[1])
        inter[0]++;
    else if(gremio[1] > inter[1])
        gremio[0]++;
    else if(gremio[1] == inter[1])
        empate++;
    grenal++;
    while(1){
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &menu);
        if (menu == 1)
            break;
        else if (menu == 2)
            break;
    }
    }while(menu == 1);
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", grenal, inter[0], gremio[0], empate);
    if (gremio[0]>inter[0])
        printf("Gremio venceu mais\n");
    else if (inter[0]>gremio[0])
        printf("Inter venceu mais\n");
    else if (inter[0] == gremio[0])
        printf("Nao houve um vencedor\n");
}
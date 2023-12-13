#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char tipo1[20], tipo2[20], tipo3[20];
    scanf("%s %s %s", &tipo1, tipo2, tipo3);
    if (tipo1[0] == 'v'){//VERTEBRADO
        if (tipo2[0] == 'a'){//AVE
            if (tipo3[0] == 'c')//CARNIVORO
                printf("aguia\n");
            if(tipo3[0] == 'o')//ONIVORO
                printf("pomba\n");
        }
        if (tipo2[0] == 'm'){//MAMIFERO
            if (tipo3[0] == 'o')//ONIVORO
                printf("homem\n");
            if (tipo3[0] == 'h')//HERBIVORO
                printf("vaca\n");
        }
    }
    if (tipo1[0] == 'i'){//INVERTEBRADO
        if (tipo2[0] == 'i'){//INSETO
            if (tipo3[2] == 'm')//HEMATOFAGO
                printf("pulga\n");
            if (tipo3[2] == 'r')//HERBIVORO
                printf("lagarta\n");
        }
        if (tipo2[0] == 'a'){//ANELIDEO
            if (tipo3[0] == 'h')//HEMATOFAGO
                printf("sanguessuga\n");
            if (tipo3[0] == 'o')//ONIVORO
                printf("minhoca\n");
        }
    }
}
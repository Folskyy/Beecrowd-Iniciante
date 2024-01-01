#include<stdio.h>

int main(){
    int nalunos, matricula_atual, matricula_final;
    float nota_atual, nota_final = 0;

    scanf("%d", &nalunos);

    for(int i = 0; i < nalunos; i++){
        scanf("%d %f", &matricula_atual, &nota_atual);
        
        if(nota_atual >= nota_final){
            matricula_final = matricula_atual;
            nota_final = nota_atual;
        } 
    }
    if(nota_final >= 8)
        printf("%d\n", matricula_final);

    else
        printf("Minimum note not reached\n");
    
    return 0;
}
#include<stdio.h>
int main()
{
    float n1, n2, n3, n4, media, exame;//pesos respectivos: 2, 3, 4 e 1
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1*2 + n2*3 + n3*4 + n4*1) / (2+3+4+1);

    printf("Media: %.1f\n", media);

    if (media>=5 && media<=6.9)
    {
       printf("Aluno em exame.\n");
        
        scanf("%f", &exame);
        media = (media + exame)/2;
       
       printf("Nota do exame: %.1f\n", exame);

        if (media>=5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media);
        }
        if (media<=4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media);
        }
    }

    else if (media>=7.0)
        printf("Aluno aprovado.\n");

    else if (media<5.0)
        printf("Aluno reprovado.\n");
}
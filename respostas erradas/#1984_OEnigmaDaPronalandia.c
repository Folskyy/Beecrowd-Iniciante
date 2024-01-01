#include<stdio.h>

int main(){
    char num[20];

    scanf("%s", num);

    int n = 0;
    
    while(num[n] != '\0')
        n++;

    for(int i = n; i >= 0; i--)
        printf("%c", num[i]);
    
    printf("\n");
}

// int main(){
//     long int num;
//     char str_num[20];

//     scanf("%lu", &num);

//     sprintf(str_num, "%lu", num);

//     int n = 0;

//     while(str_num[n] != '\0')
//         n++;

//     for(int i = n; i >= 0; i--)
//         printf("%c", str_num[i]);
//     printf("\n");
// }

// Não recebo um feedback das saídas, apenas aparece Wrong answer (20%)
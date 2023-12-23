// 1001 | R$ 1.50
// 1002 | R$ 2.50
// 1003 | R$ 3.50
// 1004 | R$ 4.50
// 1005 | R$ 5.50
#include<stdio.h>

int main(){
    int n;
    int codigo;
    float total = 0;
    int quant;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &codigo);
        scanf("%d", &quant);

        if(codigo == 1001)
            total += 1.5 * quant;        
        
        else if(codigo == 1002)
            total += 2.5 * quant;
    
        else if(codigo == 1003)
            total += 3.5 * quant;
        
        else if(codigo == 1004)
            total += 4.5 * quant;
        
        else if(codigo == 1005)
            total += 5.5 * quant;
        
    }
    printf("%.2f\n", total);
    return 0;
}

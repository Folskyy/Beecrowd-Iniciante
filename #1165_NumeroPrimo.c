#include <stdio.h>

void primo (){
    int a, test = 0; scanf("%d", &a);
    for (int i = 2; i < a; i++){
        if(a%i == 0)
            test++;
    }
    if (test > 0)
        printf("%d nao eh primo\n", a);
    else
        printf("%d eh primo\n", a);
}

int main (){
    int n; scanf("%d", &n);
    for (int i=0; i<n; i++){
        primo();
    }

}

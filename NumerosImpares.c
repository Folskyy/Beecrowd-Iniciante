#include<stdio.h>

int main() {
    int x = 0;  scanf("%d", &x);
    
    for (int i = 1; i <= x; i++) {
        if (i%2 != 0)
            printf("%d\n", i);
    }
}
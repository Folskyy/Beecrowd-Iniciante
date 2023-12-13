#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, x1, x2, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    delta = pow(b, 2) - 4*a*c;
    x1 = (-b + (sqrt(delta))) / (2*a);
    x2 = (-b - (sqrt(delta))) / (2*a);

    if (a == 0 || delta < 0)
        printf("Impossível calcular\n");

        else
            printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);

}
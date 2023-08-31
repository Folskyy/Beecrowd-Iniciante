#include<stdio.h>
#include<math.h>

int main()
{
double pi = 3.14159;
double raio;
double area;

scanf("%lf", &raio);
area = pi * pow(raio,2);
printf("A=%.4f\n", area);
return 0;
}
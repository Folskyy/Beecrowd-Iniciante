#include<stdio.h>

int forma_triangulo(int a, int b, int c, int d){
	if(a < b + c && b < a + c && c < a + b)
		return 1;

	else if(a < b + d && b < a + d && d < a + b)
		return 1;

	else if(a < d + c && d < a + c && c < a + d)
		return 1;

	else if(d < b + c && b < d + c && c < d + b)
		return 1;

	else
		return 0;
}

int main(){
	int a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	if(forma_triangulo(a, b, c, d))
		printf("S\n");
	else
		printf("N\n");

}

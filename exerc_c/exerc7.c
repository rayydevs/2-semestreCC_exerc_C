#include <stdio.h>

//Programa para saber como os operadores funcionam em C.

int main(){
	int i, j;
	printf("Digite o primeiro valor:");
	scanf("%d", &i);
	printf("Digite o segundo valor:");
	scanf("%d", &j);
	printf("%d == %d é %d\n", i, j, i==j);
	printf("%d != %d é %d\n", i, j, i!=j);
	printf("%d <= %d é %d\n", i, j, i<=j);
	printf("%d >= %d é %d\n", i, j, i>=j);
	printf("%d < %d é %d\n", i, j, i<j);
	printf("%d > %d é %d\n", i, j, i>j);
	scanf("%d", &i);
}

#include <stdio.h>

/*
Calcular a diferença, o produto, o quociente ou a soma de dois números, dependendo da operação escolhida e imprimir o
resultado.
*/

int main(){
	char x;
	float a, b, result;
	printf("Informe o cálculo que deseja realizar:");
	scanf("%f %c %f", &a, &x, &b);
	
	switch(x) {
		case'+': result = a + b;
		break;
		case'-': result = a - b;
		break;
		case'*': result = a * b;
		break;
		case'/': result = a / b;
		break;
		default:
			printf("Operação inválida.");	
	}
	printf("O resultado da operação é %.0f", result);
}

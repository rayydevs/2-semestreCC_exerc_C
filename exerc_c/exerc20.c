#include <stdio.h>

/*
Calcular a diferen�a, o produto, o quociente ou a soma de dois n�meros, dependendo da opera��o escolhida e imprimir o
resultado.
*/

int main(){
	char x;
	float a, b, result;
	printf("Informe o c�lculo que deseja realizar:");
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
			printf("Opera��o inv�lida.");	
	}
	printf("O resultado da opera��o � %.0f", result);
}

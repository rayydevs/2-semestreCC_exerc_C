#include <stdio.h>

/**
Crie uma calculadora usando a instru��o SWITCH, que pergunte qual das opera��es
b�sicas quer fazer (+, -, * e /), em seguida pe�a os dois n�meros e mostre o resultado da
opera��o matem�tica entre eles.
*/

int main(){
	char operacao;
	float num1, num2;
	printf("Escolha a opera��o[+ - * /]:");
	scanf("%c", &operacao);
	
	printf("Escolha o primeiro valor:");
	scanf("%f", &num1);
	printf("Escolha o segundo valor:");
	scanf("%f", &num2);
	
	switch(operacao){
		case '+':
			printf("A soma de %.2f + %.2f = %.2f", num1, num2, num1+num2);
			break;
			
		case '-':
			printf("A subtracao de %.2f - %.2f = %.2f", num1, num2, num1-num2);
			break;
		
		case '*':
			printf("A multiplicacao de %.2f * %.2f = %.2f", num1, num2, num1*num2);
			break;
		
		case '/':
			printf("A divisao de %.2f / %.2f = %.2f", num1, num2, num1/num2);
			break;
			
		default:
			printf("Voc� digitou uma opera��o inv�lida.");
			
	}	
}



#include <stdio.h>

/**
Crie uma calculadora usando a instrução SWITCH, que pergunte qual das operações
básicas quer fazer (+, -, * e /), em seguida peça os dois números e mostre o resultado da
operação matemática entre eles.
*/

int main(){
	char operacao;
	float num1, num2;
	printf("Escolha a operação[+ - * /]:");
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
			printf("Você digitou uma operação inválida.");
			
	}	
}



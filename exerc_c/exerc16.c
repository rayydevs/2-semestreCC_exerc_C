#include <stdio.h>

/*
Fa�a um programa que receba de entrada a idade de uma pessoa. Se a
idade for menor do que 18 anos, escreva na tela �� menor de idade�. Do contr�rio,
escreva na tela �� maior de idade�.
*/

int main(){
	int idade;
	printf("Qual sua idade?:");
	scanf("%d", &idade);
	
		if (idade < 18)
		printf("� menor de idade!");
	
		else
		printf("� maior de idade!");
		
}

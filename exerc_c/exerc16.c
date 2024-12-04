#include <stdio.h>

/*
Faça um programa que receba de entrada a idade de uma pessoa. Se a
idade for menor do que 18 anos, escreva na tela “É menor de idade”. Do contrário,
escreva na tela “É maior de idade”.
*/

int main(){
	int idade;
	printf("Qual sua idade?:");
	scanf("%d", &idade);
	
		if (idade < 18)
		printf("É menor de idade!");
	
		else
		printf("É maior de idade!");
		
}

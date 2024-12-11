/*
Usando o operador ternário, faça um programa que receba um número inteiro e verifique se esse número é
maior ou igual a 0.

Se sim, incrementa em um o valor desse número recebido.

Se não, decrementa em um o valor desse número recebido.

Apresente o resultado na tela.
*/

#include <stdio.h>

int main(){
	int x;
	printf("Digite um número:");
	scanf("%d", &x);
	x >= 0 ? ++x : --x;
	printf("%d", x);
	 
	return(0);
}

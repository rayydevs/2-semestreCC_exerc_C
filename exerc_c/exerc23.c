/*
Usando o operador tern�rio, fa�a um programa que receba um n�mero inteiro e verifique se esse n�mero �
maior ou igual a 0.

Se sim, incrementa em um o valor desse n�mero recebido.

Se n�o, decrementa em um o valor desse n�mero recebido.

Apresente o resultado na tela.
*/

#include <stdio.h>

int main(){
	int x;
	printf("Digite um n�mero:");
	scanf("%d", &x);
	x >= 0 ? ++x : --x;
	printf("%d", x);
	 
	return(0);
}

#include <stdio.h>

/*
Faça um programa que receba um número de entrada inteiro e verifique
se ele é par ou ímpar e informe ao usuário.

*/

int main(){
	int valor;
	printf("Digite um valor");
	scanf("%d", &valor);
	if (valor %2==0){
		printf("é par");
	} else {
		printf("é impar");
	}
}

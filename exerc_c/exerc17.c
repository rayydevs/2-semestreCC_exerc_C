#include <stdio.h>

/*
Fa�a um programa que receba um n�mero de entrada inteiro e verifique
se ele � par ou �mpar e informe ao usu�rio.

*/

int main(){
	int valor;
	printf("Digite um valor");
	scanf("%d", &valor);
	if (valor %2==0){
		printf("� par");
	} else {
		printf("� impar");
	}
}

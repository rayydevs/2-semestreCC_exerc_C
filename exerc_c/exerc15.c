#include <stdio.h>

/*
Elaborar um programa em linguagem C para somar dois n�meros inteiros (%d) e mostrar o valor da
soma na tela. Caso a soma dos n�meros seja maior que 10 mostrar uma mensagem informativa na tela.
(Resolva com usando o comando if)
*/

int main(){
	int a, b, soma;
	
	printf("Digite um valor:");
	scanf("%d", &a);
	printf("Digite outro valor:");
	scanf("%d", &b);
	soma = a + b;
	printf("\n A soma de %d e %d, � %d\n", a, b, soma);
	if (soma > 10){
	printf(" E � maior que 10");
	}
	return(0);
}

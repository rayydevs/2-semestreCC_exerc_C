/*
Uma loja fornece 10% de desconto para funcionários e 5% de desconto para clientes vips. Faça um
programa que calcule o valor total a ser pago por uma pessoa. O programa deverá ler o valor total da
compra efetuada e um código que identifique se o comprador é um cliente comum (1), funcionário (2)
ou vip (3).
*/

#include <stdio.h>

int main(){
	int x;
	float valor_p, valor_total;
	printf("Digite o valor do seu produto:");
	scanf("%f", &valor_p);
	printf("Digite qual opção se encaixa no seu perfil:");
	printf("(1) cliente comum:");
	printf("(2) funcionário:");
	printf("(3) vip:");
	scanf("%d", &x);
	
	switch(x){
		case 1: valor_total = valor_p-(valor_p*0.1);
		break;
		case 2: valor_total = valor_p-(valor_p*0.05);
		break;
		case 3: valor_total = valor_p-(valor_p*0);
		break;
		default:
			printf("opção inválida.");
	}
	printf("O valor da sua compra foi de R$%.0f", valor_total);
}

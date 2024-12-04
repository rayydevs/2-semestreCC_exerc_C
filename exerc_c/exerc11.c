#include <stdio.h>
#include <math.h>

//Faça um programa para calcular a raiz quadrada de um número qualquer (ponto flutuante).

int main(){
	float raiz, num;
	
	printf("Digite um numero:");
	scanf("%f", &num);
	raiz = sqrt(num);
	
	printf("A raiz de %f é %.1f", num, raiz);

}

#include <stdio.h>
#include <math.h>

//Fa�a um programa para calcular a raiz quadrada de um n�mero qualquer (ponto flutuante).

int main(){
	float raiz, num;
	
	printf("Digite um numero:");
	scanf("%f", &num);
	raiz = sqrt(num);
	
	printf("A raiz de %f � %.1f", num, raiz);

}

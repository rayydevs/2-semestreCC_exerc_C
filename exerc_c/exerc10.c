#include <stdio.h>

//Fa�a um programa para calcular o volume de um paralelep�pedo (inteiro).

int main(){
	int b, h, l, V;
	// v= base * altura * largura
	
	printf("Atribua um valor para base:");
	scanf("%d", &b);
	printf("Agora atribua um valor para a altura:");
	scanf("%d", &h);
	printf("Por fim, atribua um valor para a largura:");
	scanf("%d", &l);
	
	V = (b * h * l);
	printf("O volume do paralelepipedo � = %d", V);
	return(0);	
}

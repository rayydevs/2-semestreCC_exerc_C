#include <stdio.h>

//Fa�a um programa para calcular a m�dia de 5 n�meros (ponto flutuante).

int main(){
	float num1, num2, num3, num4, num5, media;
	
	printf("Digite o primeiro numero:\n");
	scanf("%f", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%f", &num2);
	printf("Digite o terceiro numero:\n");
	scanf("%f", &num3);
	printf("Digite o quarto numero:\n");
	scanf("%f", &num4);
	printf("Digite o quinto numero:\n");
	scanf("%f", &num5);
	
	media = (num1 + num2 + num3 + num4 + num5) / 5;
	
	printf("A media dos 5 numeros � %.2f", media);

}

#include <stdio.h>
#include <math.h>

/*
Faça um programa para calcular as raízes de uma equação do 2o grau.
OBS.:

Será necessária usar a diretiva #include<math.h> que contém funções matemáticas.

A sintaxe da função raiz quadrada é sqrt( )

A sintaxe da função potência é pow(x,y)
delta>0= 2raizes
delta=0=1raiz
delta<0=não existe raiz real
*/

int main(){
	float raiz1, raiz2, a, b, c, delta;
	printf("Digite o valor de a:");
	scanf("%f", &a);
	printf("Digite o  valor de b:");
	scanf("%f", &b);
	printf("Digite o valor de c:");
	scanf("%f", &c);
	
	delta = (pow(b,2) - 4*a*c); //calcula o delta
	if (delta<0){
		printf("Não existe raiz real");
	}else{
		if(delta==0){
			raiz1 = -b/(2*a);
			printf("A raiz é: %f", raiz1);
		}else{
			raiz1 = (-b+sqrt(delta))/ (2*a);
			raiz2 = (-b-sqrt(delta))/ (2*a);
			printf("Os valores das raizes são: %f %f", raiz1, raiz2);
		}
	}
}

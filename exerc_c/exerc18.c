#include <stdio.h>
#include <math.h>

/*
Fa�a um programa para calcular as ra�zes de uma equa��o do 2o grau.
OBS.:

Ser� necess�ria usar a diretiva #include<math.h> que cont�m fun��es matem�ticas.

A sintaxe da fun��o raiz quadrada � sqrt( )

A sintaxe da fun��o pot�ncia � pow(x,y)
delta>0= 2raizes
delta=0=1raiz
delta<0=n�o existe raiz real
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
		printf("N�o existe raiz real");
	}else{
		if(delta==0){
			raiz1 = -b/(2*a);
			printf("A raiz �: %f", raiz1);
		}else{
			raiz1 = (-b+sqrt(delta))/ (2*a);
			raiz2 = (-b-sqrt(delta))/ (2*a);
			printf("Os valores das raizes s�o: %f %f", raiz1, raiz2);
		}
	}
}

#include <stdio.h>
/* Fa�a um programa que calcule o consumo de um determinado ve�culo atrav�s da
quilometragem rodada e do n�mero de litros abastecido. Utilize duas casas decimais na
sa�da do consumo. (A quilometragem e o n�mero de litros ser�o dados de entrada do
programa. Ser�o do tipo float).

consumo = km/litros 
*/

int main(){
	float quilometragem, litros, consumo;
	
	printf("Digite a quilometragem:");
	scanf("%f", &quilometragem);
	printf("Digite a quantidade de litros que abasteceu:");
	scanf("%f", &litros);
	consumo = (quilometragem / litros);
	
	printf("O consumo ser� de = %.2f", consumo);
}

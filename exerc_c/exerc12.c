#include <stdio.h>
/* Faça um programa que calcule o consumo de um determinado veículo através da
quilometragem rodada e do número de litros abastecido. Utilize duas casas decimais na
saída do consumo. (A quilometragem e o número de litros serão dados de entrada do
programa. Serão do tipo float).

consumo = km/litros 
*/

int main(){
	float quilometragem, litros, consumo;
	
	printf("Digite a quilometragem:");
	scanf("%f", &quilometragem);
	printf("Digite a quantidade de litros que abasteceu:");
	scanf("%f", &litros);
	consumo = (quilometragem / litros);
	
	printf("O consumo será de = %.2f", consumo);
}

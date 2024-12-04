#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	int valor1, valor2, soma; //declara variável
	
	printf("Digite o primeiro valor:"); //exibe a mensagem na tela
	scanf("%d", &valor1); //recebe o valor
	
	printf("Digite o segundo valor:");
	scanf("%d", &valor2);
	
	soma = valor1 + valor2; //soma os valores
	
	printf("A soma de %d e %d é %d\n", valor1, valor2, soma); //exibe o resultado da soma na tela
	
	return 0; //programa finalizado
}


#include <stdio.h>

/*Faça um programa que entre com seu nome e sobrenome usando as funções puts() e
gets() e escreva a frase:

Ola,
fulano de tal
tudo bem?
*/

int main(){
	char name[80];
	puts("Escreva seu nome:");
	gets(name);
	puts("Ola,");
	puts(name);
	puts("tudo bem?");
}

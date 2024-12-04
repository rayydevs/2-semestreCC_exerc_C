#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Este é o número %d", 4);
	
	return(0);
}

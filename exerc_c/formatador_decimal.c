#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Este � o n�mero %d", 4);
	
	return(0);
}

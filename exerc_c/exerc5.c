#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x;
	x = 4;
	printf("Este � o n�mero %d", x);
	
	return(0);
}

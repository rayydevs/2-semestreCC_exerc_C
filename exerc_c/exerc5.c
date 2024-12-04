#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int x;
	x = 4;
	printf("Este é o número %d", x);
	
	return(0);
}
